"""Traquad standard maneuver in Isaac Sim (PhysX), same setup and metrics as the Gazebo tests.

Maneuver (simulated time): 3 s settle, 8 s rotation in place (w = 0.5 rad/s), 2 s stop,
10 s turn (v = 0.2 m/s, w = 0.5 rad/s), 2 s stop. Logs the base pose to CSV and prints
the yaw ratio, the lateral drift and the final pose error vs the ideal unicycle.

usage: ./isaac.sh track_test.py --usd <robot.usda> --out <csv> [--damping d] [--mu 0.5] [--info]
"""
import argparse
import csv
import math

parser = argparse.ArgumentParser()
parser.add_argument('--usd', required=True)
parser.add_argument('--out', required=True)
parser.add_argument('--damping', type=float, default=1e-4, help='roller joint damping [Nms/rad]')
parser.add_argument('--mu', type=float, default=0.5, help='isotropic friction of ground and robot')
parser.add_argument('--dt', type=float, default=0.001)
parser.add_argument('--info', action='store_true', help='only check settle state and forward motion')
args, _ = parser.parse_known_args()

from isaacsim import SimulationApp  # noqa: E402

app = SimulationApp({'headless': True})

import numpy as np  # noqa: E402
import omni.usd  # noqa: E402
import isaacsim.core.experimental.utils.app as app_utils  # noqa: E402
import isaacsim.core.experimental.utils.stage as stage_utils  # noqa: E402
from isaacsim.core.experimental.prims import Articulation  # noqa: E402
from isaacsim.core.simulation_manager import SimulationManager  # noqa: E402
from pxr import Gf, PhysxSchema, UsdGeom, UsdPhysics, UsdShade  # noqa: E402

SimulationManager.switch_physics_engine('physx')
print('ENGINE', SimulationManager.get_active_physics_engine(), flush=True)

R, B = 0.015, 0.395
HFE_TARGET = {'LF_HFE': 1.13, 'LH_HFE': -1.13, 'RF_HFE': -1.13, 'RH_HFE': 1.13}
PHASES = [('settle', 0.0, 0.0, 3.0), ('yaw', 0.0, 0.5, 8.0), ('stop1', 0.0, 0.0, 2.0),
          ('curve', 0.2, 0.5, 10.0), ('stop2', 0.0, 0.0, 2.0)]


async def build():
    await stage_utils.create_new_stage_async()
    stage = omni.usd.get_context().get_stage()
    UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.z)
    UsdGeom.SetStageMetersPerUnit(stage, 1.0)
    # physics material (isotropic)
    mat = UsdShade.Material.Define(stage, '/World/PhysicsMaterial')
    m = UsdPhysics.MaterialAPI.Apply(mat.GetPrim())
    m.CreateStaticFrictionAttr().Set(args.mu)
    m.CreateDynamicFrictionAttr().Set(args.mu)
    m.CreateRestitutionAttr().Set(0.0)
    # ground: infinite static plane at z = 0
    UsdGeom.Xform.Define(stage, '/World/Ground')
    plane = UsdGeom.Plane.Define(stage, '/World/Ground/Plane')
    plane.CreateAxisAttr().Set('Z')
    plane.CreateWidthAttr().Set(100.0)
    plane.CreateLengthAttr().Set(100.0)
    UsdPhysics.CollisionAPI.Apply(plane.GetPrim())
    UsdShade.MaterialBindingAPI.Apply(plane.GetPrim()).Bind(
        mat, UsdShade.Tokens.weakerThanDescendants, 'physics')
    # robot
    stage_utils.add_reference_to_stage(usd_path=args.usd, path='/World/robot')
    robot_prim = stage.GetPrimAtPath('/World/robot')
    robot_prim.GetVariantSets().GetVariantSet('Physics').SetVariantSelection('physx')
    UsdGeom.XformCommonAPI(robot_prim).SetTranslate(Gf.Vec3d(0.0, 0.0, 0.30))
    await app_utils.update_app_async()
    # bind the same physics material to every collider of the robot
    n_col = 0
    for p in stage.Traverse():
        if str(p.GetPath()).startswith('/World/robot') and p.HasAPI(UsdPhysics.CollisionAPI):
            UsdShade.MaterialBindingAPI.Apply(p).Bind(mat, UsdShade.Tokens.strongerThanDescendants, 'physics')
            n_col += 1
    print('robot colliders with material:', n_col, flush=True)
    SimulationManager.setup_simulation(dt=args.dt, device='cpu')
    for ps in stage.Traverse():
        if ps.IsA(UsdPhysics.Scene):
            px = PhysxSchema.PhysxSceneAPI.Apply(ps)
            px.CreateSolverTypeAttr().Set('TGS')
            ps.GetAttribute('physxScene:enableGPUDynamics').Set(False) if ps.GetAttribute(
                'physxScene:enableGPUDynamics') else None
    await app_utils.update_app_async()
    roots = [str(p.GetPath()) for p in stage.Traverse()
             if str(p.GetPath()).startswith('/World/robot') and p.HasAPI(UsdPhysics.ArticulationRootAPI)]
    print('articulation roots:', roots, flush=True)
    # no self-collisions inside the robot (as in Gazebo); PhysX enables them by default
    PhysxSchema.PhysxArticulationAPI.Apply(stage.GetPrimAtPath(roots[0])).CreateEnabledSelfCollisionsAttr().Set(False)
    return Articulation(roots[0])


robot = app.run_coroutine(build())
app_utils.play()
app.update()

names = robot.dof_names
N = len(names)
idx = {n: i for i, n in enumerate(names)}
hfe = [idx[n] for n in HFE_TARGET]
wheels_l = [i for n, i in idx.items() if n.startswith('joint_wheel_') and 'LEFT' in n]
wheels_r = [i for n, i in idx.items() if n.startswith('joint_wheel_') and 'RIGHT' in n]
ankles = [i for n, i in idx.items() if n.endswith('_ankle')]
rollers = [i for n, i in idx.items() if '_roller_' in n]
print(f'DOFs {N}: hfe {len(hfe)} wheels {len(wheels_l)}+{len(wheels_r)} ankles {len(ankles)} rollers {len(rollers)}',
      flush=True)

kp = np.zeros(N, np.float32); kd = np.zeros(N, np.float32); fmax = np.full(N, 1e3, np.float32)
kp[hfe] = 100.0; kd[hfe] = 10.0; fmax[hfe] = 5.0
kd[wheels_l + wheels_r] = 1000.0; fmax[wheels_l + wheels_r] = 10.0
kd[ankles] = 0.05
kd[rollers] = args.damping
robot.set_dof_gains(stiffnesses=kp[None], dampings=kd[None])
robot.set_dof_max_efforts(fmax[None])
pos_t = np.zeros(N, np.float32)
for n, q in HFE_TARGET.items():
    pos_t[idx[n]] = q
robot.set_dof_position_targets(pos_t[None])
# initial state as it ends up in Gazebo: legs at their target, tracks flat (ankle at the flat pose)
q0 = pos_t.copy()
for n in ('body_left_F_ankle', 'body_right_F_ankle'):
    q0[idx[n]] = 0.441
for n in ('body_left_H_ankle', 'body_right_H_ankle'):
    q0[idx[n]] = -0.441
robot.set_dof_positions(q0[None])


def state():
    p, q = robot.get_world_poses()
    lin, ang = robot.get_velocities()
    p, q, lin, ang = p.numpy()[0], q.numpy()[0], lin.numpy()[0], ang.numpy()[0]
    w, x, y, z = q
    yaw = math.atan2(2 * (w * z + x * y), 1 - 2 * (y * y + z * z))
    c, s = math.cos(yaw), math.sin(yaw)
    return p, yaw, c * lin[0] + s * lin[1], -s * lin[0] + c * lin[1], ang[2]


def send(v, w):
    vel = np.zeros(N, np.float32)
    vel[wheels_l] = -(v - w * B / 2) / R        # URDF convention: left wheel axis = -y
    vel[wheels_r] = (v + w * B / 2) / R
    robot.set_dof_velocity_targets(vel[None])


if args.info:
    send(0, 0)
    print('self collisions:', robot.get_enabled_self_collisions().numpy().ravel().tolist() if hasattr(
        robot.get_enabled_self_collisions(), 'numpy') else robot.get_enabled_self_collisions())
    tf_ln = robot.link_names
    for k in range(20):
        SimulationManager.step(steps=int(0.05 / args.dt))
        tf = robot._physics_articulation_view.get_link_transforms().numpy()[0]
        p, yaw, vx, vy, wz = state()
        zs = [tf[tf_ln.index(f'wheel_2_{s}'), 2] for s in ('LEFT_F', 'LEFT_H', 'RIGHT_F', 'RIGHT_H')]
        print(f't {0.05 * (k + 1):.2f} base z {p[2]:.4f} x {p[0]:+.4f} yaw {math.degrees(yaw):+.2f} '
              f'wheel2 z ' + ' '.join(f'{z:.4f}' for z in zs))
    SimulationManager.step(steps=int(2.0 / args.dt))
    p, yaw, vx, vy, wz = state()
    q = robot.get_dof_positions().numpy()[0]
    print('base', np.round(p, 4), 'yaw', round(math.degrees(yaw), 2))
    print('HFE', {n: round(float(q[idx[n]]), 3) for n in HFE_TARGET})
    print('ankles', {names[i]: round(float(q[i]), 3) for i in ankles})
    tf = robot._physics_articulation_view.get_link_transforms().numpy()[0]   # (L, 7) xyz + quat
    ln = robot.link_names
    for side in ('LEFT_F', 'LEFT_H', 'RIGHT_F', 'RIGHT_H'):
        z1, z3 = tf[ln.index(f'wheel_1_{side}'), 2], tf[ln.index(f'wheel_3_{side}'), 2]
        x1, x3 = tf[ln.index(f'wheel_1_{side}'), 0], tf[ln.index(f'wheel_3_{side}'), 0]
        print(f'track {side}: wheel1 z {z1:.4f} wheel3 z {z3:.4f} pitch {math.degrees(math.atan2(z1 - z3, abs(x1 - x3))):+.1f} deg')
    send(0.2, 0.0)
    SimulationManager.step(steps=int(2.0 / args.dt))
    p2, *_ = state()
    print('forward 2 s: dx', round(float(p2[0] - p[0]), 3), 'dy', round(float(p2[1] - p[1]), 3))
    app.close()
    raise SystemExit

rows, t, log_every = [], 0.0, 50
for name, v, w, dur in PHASES:
    send(v, w)
    for k in range(int(round(dur / args.dt))):
        SimulationManager.step(steps=1)
        t += args.dt
        if k % log_every == 0:
            p, yaw, vx, vy, wz = state()
            rows.append([round(t, 3), name, v, w, p[0], p[1], p[2], yaw, vx, vy, wz])
with open(args.out, 'w', newline='') as f:
    wr = csv.writer(f)
    wr.writerow(['t', 'phase', 'v_cmd', 'w_cmd', 'x', 'y', 'z', 'yaw', 'vx', 'vy', 'wz'])
    wr.writerows(rows)

# metrics (same as Gazebo)
a = np.array([[r[0], r[4], r[5], r[7], r[9], r[10]] for r in rows])
ph = np.array([r[1] for r in rows])
m1 = (ph == 'yaw') & (a[:, 0] > 5.0)
m2 = (ph == 'curve') & (a[:, 0] > 15.0)
print(f'RESULT yaw_in_place {a[m1, 5].mean() / 0.5 * 100:.0f}% | yaw_turn {a[m2, 5].mean() / 0.5 * 100:.0f}% '
      f'| drift_turn {np.abs(a[m2, 4]).mean():.3f} m/s | z {rows[-1][6]:.3f}', flush=True)


def ideal(p, v, w, T):
    x, y, th = p
    return x + v / w * (math.sin(th + w * T) - math.sin(th)), y - v / w * (math.cos(th + w * T) - math.cos(th)), th + w * T


def at(tq):
    i = int(np.argmin(np.abs(a[:, 0] - tq)))
    return a[i, 1], a[i, 2], a[i, 3]


yaw_unwrapped = np.unwrap(a[:, 3])
def yaw_at(tq):
    return yaw_unwrapped[int(np.argmin(np.abs(a[:, 0] - tq)))]


s0 = at(3.0); s0 = (s0[0], s0[1], yaw_at(3.0))
e1 = at(13.0); e1 = (e1[0], e1[1], yaw_at(13.0))
e2 = at(25.0); e2 = (e2[0], e2[1], yaw_at(25.0))
d2 = ideal(e1, 0.2, 0.5, 10.0)
dt_ = ideal(ideal(s0, 1e-9, 0.5, 8.0), 0.2, 0.5, 10.0)
print(f'RESULT turn_pos_err {math.hypot(e2[0] - d2[0], e2[1] - d2[1]):.3f} m | '
      f'total_pos_err {math.hypot(e2[0] - dt_[0], e2[1] - dt_[1]):.3f} m | '
      f'total_yaw_err {math.degrees(e2[2] - dt_[2]):+.1f} deg (of {math.degrees(dt_[2] - s0[2]):.0f})', flush=True)
app.close()
