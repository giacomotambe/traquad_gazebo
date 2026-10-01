#!/bin/bash
# Run an Isaac Sim python script headless with a clean environment:
# no conda variables and Isaac's own CUDA runtime first (the system libcudart 12.0 makes Isaac exit at startup).
# usage: ./isaac.sh <script.py> [args...]      ISAAC_SIM_DIR overrides the install path
ISAAC_SIM_DIR=${ISAAC_SIM_DIR:-$HOME/Downloads/isaac-sim-standalone-6.1.0-linux-x86_64}
SCRIPT=$(readlink -f "$1"); shift
cd "$ISAAC_SIM_DIR" && exec env -i HOME="$HOME" USER="$USER" PATH=/usr/local/bin:/usr/bin:/bin \
  OMNI_KIT_ACCEPT_EULA=YES \
  LD_LIBRARY_PATH="$ISAAC_SIM_DIR/exts/isaacsim.pip.nv/pip_prebundle/nvidia/cuda_runtime/lib" \
  ./python.sh "$SCRIPT" "$@"
