#!/bin/bash
# Run the standard maneuver for the roller-damping sweep (and optionally a second model) and print the metrics.
# usage: ./batch.sh <rollers.usda> [cylinders.usda]      results go to ./results (CSV + logs)
HERE=$(cd "$(dirname "$0")" && pwd)
OUT=$HERE/results
mkdir -p "$OUT"
run() {
  echo "===== $1 $(date +%T)"
  "$HERE/isaac.sh" "$HERE/track_test.py" --usd "$2" --out "$OUT/$1.csv" ${3:+--damping $3} > "$OUT/$1.log" 2>&1
  grep -a "^RESULT\|Traceback" "$OUT/$1.log" | sort -u
}
[ -n "$2" ] && run cylinders_iso05 "$(readlink -f "$2")"
for d in 1e-2 1e-4 3e-5 1e-5 0.0; do
  run rollers_$d "$(readlink -f "$1")" $d
done
