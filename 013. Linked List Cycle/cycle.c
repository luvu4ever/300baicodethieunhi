/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL) return false;
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while(fast != NULL && fast ->next != NULL){
        fast = fast -> next;
        if(fast == slow) return true;
        if(fast != NULL)
            fast = fast -> next;
        slow = slow -> next;
    }
    return false;
}