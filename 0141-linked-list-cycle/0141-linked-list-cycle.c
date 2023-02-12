/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{
    if(head == NULL)
    {
        return false;
    }
    
    struct ListNode *fastPtr = head;
    struct ListNode *slowPtr = head;
    
    while(fastPtr != NULL && fastPtr->next != NULL)
    {
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;
        
        if(fastPtr == slowPtr)
        {
            return true;
        }
    }
    
    return false;
}