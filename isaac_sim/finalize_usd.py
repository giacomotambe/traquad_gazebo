"""Write the default physics settings of traquad into the imported USD, so the asset works as is
in Isaac Sim / Isaac Lab (Isaac Lab actuators still override the joints they control).

- Physics variant set to 'physx' (the importer leaves it unselected: no physics otherwise)
- articulation self-collisions off
- HFE: PD drive Kp 100 Nm/rad, Kd 10 Nm s/rad, max 5 Nm
- wheels: velocity drive (stiffness 0, damping 1000 Nm s/rad), max 10 Nm
- ankles: passive, damping 0.05 Nm s/rad
- rollers: passive, damping --roller_damping, dry (Coulomb) friction --roller_friction [Nm]

usage: ./isaac.sh finalize_usd.py --usd assets/traquad/traquad.usda [--roller_damping 1e-4] [--roller_friction 0.06]
"""
import argparse
import math

parser = argparse.ArgumentParser()
parser.add_argument('--usd', required=True)
parser.add_argument('--roller_damping', type=float, default=1e-4)
parser.add_argument('--roller_friction', type=float, default=0.06)
args, _ = parser.parse_known_args()

from isaacsim import SimulationApp  # noqa: E402

app = SimulationApp({'headless': True})

from pxr import PhysxSchema, Sdf, Usd, UsdPhysics  # noqa: E402

DEG = math.pi / 180.0   # USD angular drive gains are per degree


def drive(prim, kp, kd, fmax):
    d = UsdPhysics.DriveAPI.Apply(prim, 'angular')
    d.CreateTypeAttr().Set('force')
    d.CreateStiffnessAttr().Set(kp * DEG)
    d.CreateDampingAttr().Set(kd * DEG)
    d.CreateMaxForceAttr().Set(fmax)
    d.CreateTargetPositionAttr().Set(0.0)
    d.CreateTargetVelocityAttr().Set(0.0)


stage = Usd.Stage.Open(args.usd)
root = stage.GetDefaultPrim()
root.GetVariantSets().GetVariantSet('Physics').SetVariantSelection('physx')
stage.Load()

counts = {'hfe': 0, 'wheel': 0, 'ankle': 0, 'roller': 0, 'articulation': 0}
for prim in stage.Traverse():
    name = prim.GetName()
    if prim.HasAPI(UsdPhysics.ArticulationRootAPI):
        PhysxSchema.PhysxArticulationAPI.Apply(prim).CreateEnabledSelfCollisionsAttr().Set(False)
        counts['articulation'] += 1
    if not prim.IsA(UsdPhysics.RevoluteJoint):
        continue
    if name.endswith('_HFE'):
        drive(prim, 100.0, 10.0, 5.0); counts['hfe'] += 1
    elif name.startswith('joint_wheel_'):
        drive(prim, 0.0, 1000.0, 10.0); counts['wheel'] += 1
    elif name.endswith('_ankle'):
        drive(prim, 0.0, 0.05, 1000.0); counts['ankle'] += 1
    elif '_roller_' in name:
        drive(prim, 0.0, args.roller_damping, 1000.0)
        # dry friction: the roller turns only when the torque on it exceeds this value
        prim.ApplyAPI('PhysxJointAxisAPI', 'angular')
        for attr in ('staticFrictionEffort', 'dynamicFrictionEffort'):
            a = prim.GetAttribute(f'physxJointAxis:angular:{attr}')
            if not a:
                a = prim.CreateAttribute(f'physxJointAxis:angular:{attr}', Sdf.ValueTypeNames.Float)
            a.Set(args.roller_friction)
        counts['roller'] += 1
stage.GetRootLayer().Save()
print('finalized', counts, flush=True)
app.close()
