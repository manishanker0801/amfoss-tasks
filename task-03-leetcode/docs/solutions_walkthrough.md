# Task 03 - LeetCode Problem Solutions

## 1. Two Sum (LeetCode #1) - Easy
- **Language:** Python 3
- **File:** `python/two_sum.py`
- **Approach:** Uses a hash map to map values to indices in $O(n)$ time by looking up target complements during iteration.

## 2. Reverse Linked List (LeetCode #206) - Easy
- **Language:** C
- **File:** `c/reverse_list.c`
- **Approach:** Reverses pointers in-place using `prev`, `curr`, and `next_node` pointers with $O(1)$ space complexity.

## 3. Valid Anagram (LeetCode #242) - Easy
- **Language:** C
- **File:** `c/valid_anagram.c`
- **Approach:** Tracks frequency deltas across a 26-element array, verifying character counts balance to zero.

## 4. Longest Substring Without Repeating Characters (LeetCode #3) - Medium
- **Language:** Python 3
- **File:** `python/longest_substring.py`
- **Approach:** Sliding window technique maintaining left and right boundary pointers to dynamically adjust window size.

## 5. Container With Most Water (LeetCode #11) - Medium
- **Language:** C
- **File:** `c/container_water.c`
- **Approach:** Two-pointer greedy method shrinking the boundary inward from the shorter height to maximize calculated area.
