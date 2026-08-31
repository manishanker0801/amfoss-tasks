/**
 * Problem: Reverse Linked List (LeetCode #206)
 * Difficulty: Easy
 * Language: C
 *
 * Approach:
 *   In-place pointer reversal using three pointers: prev, curr, next_node.
 *   Iterate through list, swapping next pointers until curr is NULL.
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next_node = NULL;
    
    while (curr != NULL) {
        next_node = curr->next; // Save next pointer
        curr->next = prev;      // Reverse current node pointer
        prev = curr;            // Advance prev pointer
        curr = next_node;       // Advance curr pointer
    }
    
    return prev; // New head pointer
}

void printList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    // Construct test list: 1 -> 2 -> 3 -> NULL
    struct ListNode node3 = {3, NULL};
    struct ListNode node2 = {2, &node3};
    struct ListNode node1 = {1, &node2};

    printf("Original List: ");
    printList(&node1);

    struct ListNode* reversed = reverseList(&node1);
    printf("Reversed List: ");
    printList(reversed);

    return 0;
}
