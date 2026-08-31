/**
 * Problem: Container With Most Water (LeetCode #11)
 * Difficulty: Medium
 * Language: C
 *
 * Approach:
 *   Two Pointers Greedy Method starting from extremities.
 *   Move pointer with shorter height inward to search for larger area.
 */

#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max_water = 0;
    
    while (left < right) {
        int width = right - left;
        int min_height = height[left] < height[right] ? height[left] : height[right];
        int current_area = width * min_height;
        
        if (current_area > max_water) {
            max_water = current_area;
        }
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return max_water;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(height) / sizeof(height[0]);
    
    printf("Max Water Capacity: %d\n", maxArea(height, size));
    return 0;
}
