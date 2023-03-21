/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    // Create a vector to store the values of the linked list
    int* values = (int*)malloc(sizeof(int)*10001);
    int n = 0;
    while (head != NULL) {
        values[n++] = head->val;
        head = head->next;
    }
    
    // Create a stack to store the indices of the values
    int iStack[10001];
    int top = -1;
    int* answer = (int*)malloc(sizeof(int)*n);
    
    for (int i = 0; i < n; ++i) {
        while (top >= 0 && values[iStack[top]] < values[i]) {
            int smaller = iStack[top--];
            answer[smaller] = values[i];
        }
        iStack[++top] = i;
    }
    // Initialize remaining elements to 0
    while (top >= 0) {
        answer[iStack[top--]] = 0;
    }
    *returnSize = n;
    return answer;
}
