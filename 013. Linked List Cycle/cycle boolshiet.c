#define MAX 1000005

bool hasCycle(struct ListNode *head) {
    if(head == NULL)
        return false;
    while(head -> next != NULL){
        head = head-> next;
        if(head -> val == MAX)
            return true;
        head -> val = MAX;
    }
    return false;
}