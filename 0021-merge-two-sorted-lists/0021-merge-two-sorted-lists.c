/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if(list1 == NULL)
    {
        return list2;
    }
    
    if(list2 == NULL)
    {
        return list1;
    }
    
    struct ListNode *dummyNode = (struct ListNode*)calloc(1, sizeof(struct ListNode));
    struct ListNode *head = dummyNode, *node = dummyNode;
    
    while(list1 && list2)
    {
        node = dummyNode;
        
        if(list1->val <= list2->val)
        {
            dummyNode->val = list1->val;
            list1 = list1->next;
        }
        else
        {
            dummyNode->val = list2->val;
            list2 = list2->next;
        }
        
        dummyNode->next = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        dummyNode = dummyNode->next;
    }
    
    while(list1)
    {
        node = dummyNode;
        dummyNode->val = list1->val;
        list1 = list1->next;
        dummyNode->next = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        dummyNode = dummyNode->next;
    }
    
    while(list2)
    {
        node = dummyNode;
        dummyNode->val = list2->val;
        list2 = list2->next;
        dummyNode->next = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        dummyNode = dummyNode->next;
    }
    
    node->next = NULL;
    
    return head;
}