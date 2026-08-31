"""
Problem: Longest Substring Without Repeating Characters (LeetCode #3)
Difficulty: Medium
Language: Python 3

Approach:
  Sliding Window with Two Pointers.
  Maintain left boundary and update character index map.
  When a duplicate is encountered, slide the left boundary past the duplicate's prior index.
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_map = {}  # Map: character -> last seen index
        left = 0
        max_len = 0
        
        for right, char in enumerate(s):
            if char in char_map and char_map[char] >= left:
                left = char_map[char] + 1
            
            char_map[char] = right
            max_len = max(max_len, right - left + 1)
            
        return max_len


if __name__ == "__main__":
    solver = Solution()
    test_str = "abcabcbb"
    result = solver.lengthOfLongestSubstring(test_str)
    print(f"Input: s = '{test_str}'")
    print(f"Output: {result}")
