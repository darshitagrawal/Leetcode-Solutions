/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *findmiddle(struct ListNode *head);
struct ListNode *reverse(struct ListNode *head);

bool isPalindrome(struct ListNode* head)
{
    struct ListNode *first = head;
    struct ListNode *middle = findmiddle(head);
    struct ListNode *second = reverse(middle->next);
    
    while(second)
    {
        if(first->val != second->val)
        {
            return false;
        }
        
        first = first->next;
        second = second->next;
    }
    
    return true;
}

struct ListNode *findmiddle(struct ListNode *head)
{
    struct ListNode *FastNode = head;
    struct ListNode *SlowNode = head;
    
    while(FastNode->next != NULL && FastNode->next->next != NULL)
    {
        SlowNode = SlowNode->next;
        FastNode = FastNode->next->next;
    }
    
    return SlowNode;
}

struct ListNode *reverse(struct ListNode *head)
{
    struct ListNode *CurrentNode = head;
    struct ListNode *PreviousNode = NULL;
    struct ListNode *NextNode = NULL;
    
    while(CurrentNode)
    {
        NextNode = CurrentNode->next;
        CurrentNode->next = PreviousNode;
        PreviousNode = CurrentNode;
        CurrentNode = NextNode;
    }
    
    return PreviousNode;
}