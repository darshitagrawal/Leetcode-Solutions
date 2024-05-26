/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* plusOne(struct ListNode* head)
{
    struct ListNode* sentinel = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    sentinel->next = head;
    struct ListNode* notNine = sentinel;
    
    while(head != NULL)
    {
        if(head->val != 9)
        {
            notNine = head;
        }
        head = head->next;
    }
        
    notNine->val++;
    notNine = notNine->next;
        
    while(notNine != NULL)
    {
        notNine->val = 0;
        notNine = notNine->next;
    }
    
    free(notNine);
    
    return(sentinel->val != 0 ? sentinel : sentinel->next);
}