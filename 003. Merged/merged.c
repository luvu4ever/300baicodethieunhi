/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    struct ListNode *first = NULL;
    
    if(l1->val < l2->val){
        first = l1;
        l1 = l1->next;
    }
    else{
        first = l2;
        l2 = l2->next;
    }
    
    struct ListNode *ans;
    ans = first;
    
    while(l1 && l2 ){
        if(l1->val < l2->val){
            ans = l1;
            l1 = l1->next;
        }
        else{
            ans = l2;
            l2 = l2->next;
        }
        ans = ans-> next;
    }
    if(l1 != NULL){
        ans -> next = l1;
    } else{
        ans -> next = l2;
    }
    return ans;
}