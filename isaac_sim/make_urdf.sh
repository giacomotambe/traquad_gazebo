#!/bin/bash
# Expand traquad.xacro inside the ROS container and rewrite the mesh paths for the host,
# so Isaac Sim (running on the host) can find the meshes.
# usage: ./make_urdf.sh <out.urdf> [track_xacro]
#   track_xacro: optional alternative track.xacro (e.g. an older wheel model); the repo file is restored after.
set -e
OUT=$(readlink -f "$1")
REPO=$(cd "$(dirname "$0")/.." && pwd)
TRACK=$REPO/src/mulinex_description/urdf/track.xacro
CONTAINER=${CONTAINER:-ros2_humble_simulator}
WS=/home/ros/docker_simulation_ws
if [ -n "$2" ]; then cp "$TRACK" /tmp/track.xacro.bak; cp "$2" "$TRACK"; fi
docker exec "$CONTAINER" bash -c "source /opt/ros/humble/setup.bash && cd $WS && source install/setup.bash && \
  xacro install/mulinex_description/share/mulinex_description/urdf/traquad.xacro" > "$OUT"
if [ -n "$2" ]; then cp /tmp/track.xacro.bak "$TRACK"; fi
sed -i "s|file://$WS/install/mulinex_description/share/mulinex_description/meshes//|$REPO/src/mulinex_description/meshes/|g" "$OUT"
echo "written $OUT"
