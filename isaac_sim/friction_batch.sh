#!/bin/bash
# Roller dry-friction sweep: lateral push matrix + rotation sequence of open_traquad.py for each friction torque.
# usage: ./friction_batch.sh <rollers.usda> [damping]      results in ./results
HERE=$(cd "$(dirname "$0")" && pwd)
OUT=$HERE/results
mkdir -p "$OUT"
USD=$(readlink -f "$1")
D=${2:-1e-4}
for tau in ${TAUS:-0.003 0.006 0.012 0.018}; do
  echo "===== roller friction $tau Nm, damping $D $(date +%T)"
  "$HERE/isaac.sh" "$HERE/lateral_force.py" --usd "$USD" --roller_damping $D --roller_friction $tau \
    --forces 2 5 10 20 40 > "$OUT/friction_lateral_$tau.log" 2>&1
  grep -a "^RES\|Traceback" "$OUT/friction_lateral_$tau.log"
  "$HERE/isaac.sh" "$HERE/open_traquad_replica.py" --usd "$USD" --roller_damping $D --roller_friction $tau \
    > "$OUT/friction_rotation_$tau.log" 2>&1
  grep -aE "^ [+-][0-9]\.[0-9]{2} +[+-][0-9]|Traceback" "$OUT/friction_rotation_$tau.log"
done
