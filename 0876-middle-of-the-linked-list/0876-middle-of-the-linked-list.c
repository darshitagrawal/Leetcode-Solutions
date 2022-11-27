/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
    uint8_t count = 0, middle = 0;
    struct ListNode *DummyNode = head;
    
    while(DummyNode != NULL)
    {
        DummyNode = DummyNode->next;
        count++;
    }
    
    DummyNode = head;
    
    while(DummyNode != NULL)
    {
        if(middle == count / 2)
        {
            break;
        }
        
        middle++;
        DummyNode = DummyNode->next;
    }
    
    return DummyNode;        
}