#!/bin/bash
# Lateral push matrix: forces x roller damping (+ cylindrical wheels as reference). Results in ./results
# usage: ./lateral_batch.sh <rollers.usda> [cylinders.usda]
HERE=$(cd "$(dirname "$0")" && pwd)
OUT=$HERE/results
mkdir -p "$OUT"
FORCES="2 5 10 20 40"
if [ -n "$2" ]; then
  echo "===== cylinders $(date +%T)"
  "$HERE/isaac.sh" "$HERE/lateral_force.py" --usd "$(readlink -f "$2")" --forces $FORCES > "$OUT/lateral_cylinders.log" 2>&1
  grep -a "^RES\|Traceback" "$OUT/lateral_cylinders.log"
fi
for d in 1e-2 1e-3 1e-4 3e-5 1e-5 0.0; do
  echo "===== rollers d=$d $(date +%T)"
  "$HERE/isaac.sh" "$HERE/lateral_force.py" --usd "$(readlink -f "$1")" --roller_damping $d --forces $FORCES \
    > "$OUT/lateral_rollers_$d.log" 2>&1
  grep -a "^RES\|Traceback" "$OUT/lateral_rollers_$d.log"
done
