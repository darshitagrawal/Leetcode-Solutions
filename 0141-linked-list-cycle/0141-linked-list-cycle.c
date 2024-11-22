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
    
    struct ListNode *slowPtr = head;
    struct ListNode *fastPtr = head;
    
    while(fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        
        if(slowPtr == fastPtr)
        {
            return true;
        }
    }
    
    return false;
}