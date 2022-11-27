/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *fastptr = head;
    struct ListNode *slowptr = head;
    
    while(fastptr != NULL && fastptr->next != NULL)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    
    return slowptr;
}