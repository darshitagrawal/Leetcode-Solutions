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
    struct Listnode *prevNode = NULL;
    
    while(currNode != NULL)
    {
        struct ListNode *nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    
    return prevNode;
}
