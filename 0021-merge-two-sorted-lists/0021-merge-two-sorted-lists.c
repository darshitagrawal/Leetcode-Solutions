/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *preHead = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    struct ListNode *prevNode = preHead;
    
    while(list1 != NULL && list2 != NULL)
    {
        if(list1->val <= list2->val)
        {
            prevNode->next = list1;
            list1 = list1->next;
        }
        else
        {
            prevNode->next = list2;
            list2 = list2->next;
        }
        
        prevNode = prevNode->next;
    }
    
    prevNode->next = list1 == NULL ? list2 : list1;
    
    return preHead->next;
}