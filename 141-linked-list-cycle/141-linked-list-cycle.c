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
    
    struct ListNode *fast = head->next;
    struct ListNode *slow = head;
    
    while(slow != fast)
    {
        if(fast == NULL || fast->next == NULL)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return true;
}