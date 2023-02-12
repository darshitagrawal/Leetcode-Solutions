/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *fastPtr = head;
    struct ListNode *slowPtr = head;
    
    while(fastPtr != NULL && fastPtr->next != NULL)
    {
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;
    }
    
    return slowPtr;
}