/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *CurrentNode = head;
    struct ListNode *PreviousNode = NULL;
    
    while(CurrentNode)
    {
        struct ListNode *NextNode = CurrentNode->next;
        CurrentNode->next = PreviousNode;
        PreviousNode = CurrentNode;
        CurrentNode = NextNode;
    }
    
    return PreviousNode;
}