#!/bin/bash
# Convert a traquad URDF to USD with the Isaac Sim URDF importer (floating base, force drives on all joints;
# gains and targets are set at runtime by track_test.py).
# usage: ./import_urdf.sh <robot.urdf> <out_dir>
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
ISAAC_SIM_DIR=${ISAAC_SIM_DIR:-$HOME/Downloads/isaac-sim-standalone-6.1.0-linux-x86_64}
"$HERE/isaac.sh" "$ISAAC_SIM_DIR/standalone_examples/api/isaacsim.asset.importer.urdf/urdf_import.py" \
  --urdf "$(readlink -f "$1")" --usd-path "$(readlink -m "$2")" \
  --merge-fixed-joints --no-fix-base --joint-drive-type force --joint-target-type position --robot-type Default
