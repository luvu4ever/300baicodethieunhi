/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode* root_t;


root_t createNode(int x){
    root_t newNode = (root_t) malloc(sizeof(struct ListNode));
    newNode -> val = x;
    newNode -> next = NULL;
    return newNode;
}

root_t llInsertHead(root_t head, int data){
    root_t newNode = createNode(data);
    newNode -> next = head;
    return newNode;   
}

root_t llRemoveCur(root_t head, root_t p){
    if(p == NULL) return NULL;
    root_t trav = head;
    while(trav != NULL && trav -> next != p){
        trav = trav -> next;
    }
    trav -> next = p -> next;
    free(p);
    return trav -> next;
}
void printLL(root_t root){
    root_t trav = root;
    while(trav != NULL){
        printf("%d", trav -> val);
        trav = trav -> next;
    }
    printf("------------------\n");
    return;
}

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *trav = head;
    while(trav != NULL){
        head = llInsertHead(head, trav-> val);
        trav = llRemoveCur(head,trav);
        printLL(head);
    }
    return head;
}

int main(){
    root_t root = createNode(5);
    for(int i=4; i>=1; i--)
        root = llInsertHead(root, i);
    printLL(root);
    reverseList(root);
    return 0;
}