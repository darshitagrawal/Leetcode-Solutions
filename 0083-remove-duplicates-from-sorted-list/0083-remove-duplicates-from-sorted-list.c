/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    
    struct ListNode *currNode = head;
    
    while(currNode->next)
    {
        if(currNode->val == currNode->next->val)
        {
            currNode->next = currNode->next->next;
        }
        else
        {
            currNode = currNode->next;
        }
    }
    
    return head;
}