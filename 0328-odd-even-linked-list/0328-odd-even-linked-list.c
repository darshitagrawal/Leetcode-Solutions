/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    
    struct ListNode *odd = head, *even = head->next, *evenHead = even;
    
    while(odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        
        even->next = odd->next;
        even = even->next;
    }
    
    odd->next = evenHead;
    
    return head;
}