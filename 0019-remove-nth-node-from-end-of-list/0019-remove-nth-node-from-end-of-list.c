/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *dummyNode = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    int length = 0;

    dummyNode->next = head;
    
    struct ListNode *first = head;
    
    while(first!= NULL)
    {
        first = first->next;
        length++;
    }
    
    length -= n;
    first = dummyNode;
    
    while(length > 0)
    {
        length--;
        first = first->next;
    }
    
    first->next = first->next->next;
    
    return dummyNode->next;  
}