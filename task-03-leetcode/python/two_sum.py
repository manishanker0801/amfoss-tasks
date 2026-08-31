"""
Problem: Two Sum (LeetCode #1)
Difficulty: Easy
Language: Python 3

Approach:
  Hash Map / Dictionary for O(1) lookups.
  Iterate through the array, computing target - num.
  If the complement exists in the map, return indices.
"""

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}  # Map: number value -> index
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
            
        return []


if __name__ == "__main__":
    solver = Solution()
    test_nums = [2, 7, 11, 15]
    test_target = 9
    result = solver.twoSum(test_nums, test_target)
    print(f"Input: nums = {test_nums}, target = {test_target}")
    print(f"Output: {result}")
