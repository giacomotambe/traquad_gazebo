# Traquad track tests in Isaac Sim

Same maneuver and metrics as the Gazebo tests, run in Isaac Sim 6.1 (PhysX, 1 ms step, headless).

## Steps

```bash
cd isaac_sim
./make_urdf.sh /tmp/traquad.urdf                    # current model (roller wheels); needs the ROS container running
./import_urdf.sh /tmp/traquad.urdf /tmp/traquad_usd  # URDF -> USD
./isaac.sh track_test.py --usd /tmp/traquad_usd/traquad/traquad.usda --out /tmp/run.csv --info   # quick check
./batch.sh /tmp/traquad_usd/traquad/traquad.usda     # damping sweep, results in ./results

# settings of ../open_traquad.py (Isaac Lab training setup), without Isaac Lab
./isaac.sh open_traquad_replica.py --usd /tmp/traquad_usd/traquad/traquad.usda --roller_damping 1e-4
# video with a follow camera (PNG frames named by simulated time, ~60 per simulated second)
./isaac.sh video_replica.py --usd /tmp/traquad_usd/traquad/traquad.usda --out /tmp/frames --roller_damping 1e-4
ffmpeg -framerate 60 -pattern_type glob -i '/tmp/frames/*.png' -c:v libx264 -pix_fmt yuv420p video.mp4
```

`ISAAC_SIM_DIR` sets the Isaac Sim install path (default `~/Downloads/isaac-sim-standalone-6.1.0-linux-x86_64`).

## Test setup (`track_test.py`)

- PhysX, 1 ms step, TGS solver, CPU; ground is a collision plane; isotropic friction 0.5 on ground and robot.
- HFE: PD Kp = 100, Kd = 10, max 5 Nm, target ±1.13 rad. Wheels: velocity drive, max 10 Nm.
  Ankles: passive, damping 0.05. Rollers: passive, damping `--damping`.
- Initial state as in Gazebo: legs at target, tracks flat.
- Maneuver: 3 s settle, 8 s rotation in place (ω = 0.5 rad/s), 2 s stop, 10 s turn (v = 0.2 m/s, ω = 0.5 rad/s), 2 s stop.
  Track speeds from r = 0.015 m, B = 0.395 m.

## Scripts

| Script | What it does |
|---|---|
| `track_test.py` | standard maneuver of the Gazebo tests, metrics + CSV |
| `open_traquad_replica.py` | stance, drives, dt, friction and command sequence of `open_traquad.py`; prints measured vs commanded velocity per segment |
| `video_replica.py` | same setup as the replica, renders a follow-camera video with command and measured velocity on each frame |

## Pitfalls found

- Run Isaac through `isaac.sh`: a conda environment or the system `libcudart` 12.0 makes it exit at startup.
- The imported USD has a `Physics` variant set with no default: `track_test.py` selects `physx`,
  otherwise the robot has no physics.
- Use a collision plane as ground: a thin large box makes the cylinder-wheel contacts explode.
- Set the initial ankle angles: starting at 0 (outside the ankle limits) leaves the hind tracks tilted.
- Camera lens: set `focalLength` / aperture on the USD camera prim (in mm); `RtxCamera.camera.set_focal_lengths` uses other units.
- Track width in the controller: 0.395 m (contact lines at y = ±0.1975), not 0.35.
