/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/*struct ListNode* rotateRight(struct ListNode* head, int k)
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
}*/

struct ListNode* rotateRight(struct ListNode* head, int k) {
    // base cases
    if (head == NULL) return NULL;
    if (head->next == NULL) return head;
    // close the linked list into the ring
    struct ListNode* old_tail = head;
    int n;
    for (n = 1; old_tail->next != NULL; n++) old_tail = old_tail->next;
    old_tail->next = head;
    // find new tail : (n - k % n - 1)th node
    // and new head : (n - k % n)th node
    struct ListNode* new_tail = head;
    for (int i = 0; i < n - k % n - 1; i++) new_tail = new_tail->next;
    struct ListNode* new_head = new_tail->next;
    // break the ring
    new_tail->next = NULL;
    return new_head;
}