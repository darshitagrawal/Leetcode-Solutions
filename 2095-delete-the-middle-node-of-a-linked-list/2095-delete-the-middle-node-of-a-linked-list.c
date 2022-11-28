/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    
    struct ListNode *fastptr = head;
    struct ListNode *slowptr = head;
    struct ListNode *tailptr = head;
    
    while(fastptr != NULL && fastptr->next != NULL)
    {
        tailptr = slowptr;
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    
    tailptr->next = tailptr->next->next;
    return head;
}
