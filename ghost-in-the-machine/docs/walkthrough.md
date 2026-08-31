# Ghost in the Machine - Complete Solution Walkthrough

## Level 1: System Telemetry Reconnaissance
- **Goal:** Extract hidden process logs and environment flags.
- **Commands:**
  ```bash
  env | grep -i "FLAG"
  cat /var/log/syslog | grep "GHOST"
  ```
- **Flag:** `FLAG{ghost_recon_telemetry_unlocked}`

## Level 2: Memory & Binary Inspection
- **Goal:** Analyze binary strings and extract embedded memory tokens.
- **Commands:**
  ```bash
  strings ./machine_core | grep "FLAG{"
  ```
- **Flag:** `FLAG{memory_core_dump_analyzed}`

## Level 3: Privilege Escalation & Hidden Signals
- **Goal:** Trigger ghost signals and elevate execution context.
- **Commands:**
  ```bash
  chmod +x ./scripts/ghost_trigger.sh
  ./scripts/ghost_trigger.sh --override
  ```
- **Flag:** `FLAG{ghost_in_the_machine_escaped}`
