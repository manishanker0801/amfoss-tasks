/**
 * Problem: Valid Anagram (LeetCode #242)
 * Difficulty: Easy
 * Language: C
 *
 * Approach:
 *   Frequency counting using a fixed array of size 26.
 *   Increment for characters in 's' and decrement for characters in 't'.
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }
    
    int counts[26] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    
    printf("s = '%s', t = '%s'\n", s, t);
    printf("Is Anagram: %s\n", isAnagram(s, t) ? "true" : "false");
    
    return 0;
}
