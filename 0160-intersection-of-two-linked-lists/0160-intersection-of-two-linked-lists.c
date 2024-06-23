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
        if(nodeA == NULL)
        {
            nodeA = headB;
        }
        else
        {
            nodeA = nodeA->next;
        }
        
        if(nodeB == NULL)
        {
            nodeB = headA;
        }
        else
        {
            nodeB = nodeB->next;
        }
    }
    
    return nodeA;
}