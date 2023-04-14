/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    struct ListNode *nodeA = headA, *nodeB = headB;
    
    while(nodeA != nodeB)
    {
        nodeA = nodeA == NULL ? headB : nodeA->next;
        nodeB = nodeB == NULL ? headA : nodeB->next;
    }
    
    return nodeA;
}