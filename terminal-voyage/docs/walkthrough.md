# Terminal Voyage - Solutions Walkthrough
## Level 1: Initial Reconnaissance
Use 'ls -la' to reveal hidden files like '.welcome_flag'.
## Level 2: Directory Traversal
Use 'find . -name "*flag*"' to locate deeply nested flags.
## Level 3: Execution Permissions
Use 'chmod +x' to make binary script executable.
## Level 4: Pattern Search
Use 'grep -rn "FLAG{" .' to extract all flags.

## Level 5: GrandLine - Loguetown Reef (Devil Fruit Awakening)
- **Objective:** Find the hidden execution script 'eat.sh' in the index and awaken the fruit flag.
- **Commands:**
  git ls-files -s | grep "100755"
  ./eat.sh
- **Flag Captured:** `ONE_PIECE{GITO_GITO_NO_AWAKENING}`

## Level 6: GrandLine - Whiskey Peak (Baroque Works Vault Decryption)
- **Objective:** Export the AWAKENING_SIGNATURE environment variable, inspect the hidden unlock script across branches, and diff the decrypted log streams.
- **Commands:**
  export AWAKENING_SIGNATURE="ONE_PIECE{GITO_GITO_NO_AWAKENING}"
  git show origin/whiskey_peak_investigation:GrandLine/Whiskey_Peak/.baroque_works_cache/unlock_vault.sh > /tmp/unlock.sh
  AWAKENING_SIGNATURE="ONE_PIECE{GITO_GITO_NO_AWAKENING}" bash /tmp/unlock.sh
  diff -u marine_intercept.log bounty_hunter_feed.log
- **Flag Captured:** `BAROQUE_DIAL{SPLIT_TIMELINE_MISDIRECTION}`
