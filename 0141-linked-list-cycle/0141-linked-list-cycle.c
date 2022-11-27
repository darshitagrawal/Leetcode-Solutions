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
    
    struct ListNode *fastptr = head;
    struct ListNode *slowptr = head;
    
    while(fastptr != NULL && fastptr->next != NULL)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        
        if(fastptr == slowptr)
        {
            return true;
        }
    }
    
    return false;
}