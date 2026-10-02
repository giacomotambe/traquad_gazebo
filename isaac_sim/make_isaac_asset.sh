#!/bin/bash
# Build the instanceable Isaac Sim / Isaac Lab asset of traquad from the current xacro:
# xacro -> URDF (host mesh paths) -> USD (URDF importer) -> default physics settings (finalize_usd.py).
# usage: ./make_isaac_asset.sh [roller_damping] [roller_friction]     output: assets/traquad/traquad.usda
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
TMP=$(mktemp -d)
"$HERE/make_urdf.sh" "$TMP/traquad.urdf"
rm -rf "$HERE/assets/traquad"
"$HERE/import_urdf.sh" "$TMP/traquad.urdf" "$HERE/assets" > "$TMP/import.log" 2>&1
grep -a "Import complete" "$TMP/import.log"
"$HERE/isaac.sh" "$HERE/finalize_usd.py" --usd "$HERE/assets/traquad/traquad.usda" \
  --roller_damping "${1:-1e-4}" --roller_friction "${2:-0.06}" > "$TMP/finalize.log" 2>&1
grep -a "^finalized\|Traceback" "$TMP/finalize.log"
rm -rf "$TMP"
