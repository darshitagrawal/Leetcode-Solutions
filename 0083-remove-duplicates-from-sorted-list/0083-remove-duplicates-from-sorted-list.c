/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *currNode = head;
    
    if(head == NULL)
    {
        return head;
    }
    
    while(currNode->next != NULL)
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