/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode dummyNode = {0};
    dummyNode.next = head;
    struct ListNode *first = &dummyNode, *second = &dummyNode;
    int count = 1;
    
    while(count <= n + 1)
    {
        first = first->next;
        count++;
    }
    
    while(first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    
    second->next = second->next->next;
    
    return dummyNode.next;
}