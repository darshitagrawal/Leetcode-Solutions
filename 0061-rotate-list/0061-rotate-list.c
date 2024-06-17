/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    int length = 1, counter = 0;
    struct ListNode *oldNode = head;
    struct ListNode *newNode = head;
    struct ListNode *newHead = head;
    
    while(oldNode->next != NULL)
    {
        length++;
        oldNode = oldNode->next;
    }
    
    oldNode->next = head;
    
    while(counter < length - k % length - 1)
    {
        newNode = newNode->next;
        counter++;
    }
    
    newHead = newNode->next;
    newNode->next = NULL;
    
    return newHead;
}