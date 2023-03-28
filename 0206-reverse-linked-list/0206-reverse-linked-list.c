/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *currNode = head;
    struct ListNode *prevNode = NULL;
    struct ListNode *nextNode = NULL;
    
    while(currNode != NULL)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    
    return prevNode;
}