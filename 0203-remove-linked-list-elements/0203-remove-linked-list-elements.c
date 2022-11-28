/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
    while(head != NULL && head->val == val)
    {
        head = head->next;
    }
    
    if(head == NULL)
    {
        return NULL;
    }
    
    struct ListNode *CurrentPtr = head;
    struct ListNode *PreviousPtr = head;
    
    while(CurrentPtr)
    {
        if(CurrentPtr->val == val)
        {
            CurrentPtr = PreviousPtr;
            CurrentPtr->next = CurrentPtr->next->next;
        }
        else
        {
            PreviousPtr = CurrentPtr;
            CurrentPtr = CurrentPtr->next;
        }
    }
    
    return head;
}