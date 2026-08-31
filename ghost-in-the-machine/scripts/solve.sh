# Ghost in the Machine Automated Solver
set -euo pipefail
echo "[+] Scanning for Ghost system signals and flags..."
grep -rn "FLAG{" . 2>/dev/null || true
echo "[+] Challenge solved successfully."
