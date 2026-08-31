#!/usr/bin/env bash
set -euo pipefail

echo "[+] Searching for flags..."
grep -rn "FLAG{" . 2>/dev/null || true
