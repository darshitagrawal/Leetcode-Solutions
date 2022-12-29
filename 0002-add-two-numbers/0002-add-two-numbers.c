/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *dummyHead = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    struct ListNode *currNode = dummyHead, *dummyNode = dummyHead;
    int carry = 0, x = 0, y = 0, sum = 0;
    
    while(l1 != NULL || l2 != NULL || carry != 0)
    {
        x = l1 ? l1->val : 0;
        y = l2 ? l2->val : 0;
        sum = x + y + carry;
        carry = sum / 10;

        dummyNode = currNode;
        currNode->val = sum % 10;
        currNode->next = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        currNode = currNode->next;        
        
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
    }
    dummyNode->next = NULL;
    
    return dummyHead;
}