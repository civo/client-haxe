#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
VERSION="$(tr -d '[:space:]' < VERSION)"
mkdir -p releases
: "${COPYFILE_DISABLE:=1}"
export COPYFILE_DISABLE

targets=(nodejs php lua python cpp cs java)
for t in "${targets[@]}"; do
  if [[ ! -d "dist/$t" ]]; then
    echo "missing dist/$t — run make dist first" >&2
    exit 1
  fi
  out="releases/civo-${t}-${VERSION}.tar.gz"
  tar -czf "$out" -C dist "$t"
  echo "wrote $out"
done
