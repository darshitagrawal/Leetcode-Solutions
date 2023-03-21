/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *sentinel = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    
    sentinel->next = head;
    
    struct ListNode *predNode = sentinel;
    
    while(head != NULL)
    {
        if(head->next != NULL && head->val == head->next->val)
        {
            while(head->next != NULL && head->val == head->next->val)
            {
                head = head->next;
            }
            
            predNode->next = head->next;
        }
        else
        {
            predNode = predNode->next;
        }
        
        head = head->next;
    }
    
    return sentinel->next;
}