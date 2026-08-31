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
