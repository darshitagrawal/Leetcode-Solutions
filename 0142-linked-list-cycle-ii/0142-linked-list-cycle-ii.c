/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *getIntersect(struct ListNode *head)
{
    struct ListNode *hare = head, *tortoise = head;
    
    while(hare != NULL && hare->next != NULL)
    {
        hare = hare->next->next;
        tortoise = tortoise->next;
        
        if(hare == tortoise)
        {
            return hare;
        }
    }
    
    return NULL;
}

struct ListNode *detectCycle(struct ListNode *head) 
{
    if(head == NULL)
    {
        return NULL;
    }
    
    struct ListNode *hare = getIntersect(head);
    
    if(hare == NULL)
    {
        return NULL;
    }
    
    struct ListNode *tortoise = head;
    
    while(hare != tortoise)
    {
        hare = hare->next;
        tortoise = tortoise->next;
    }
    
    return hare;
}