#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

struct node* newNode(int x){
    struct node* node = new struct node;
    node -> data = x;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

int Height(node *cur){
    if(cur == NULL) return 0;
    int left = Height(cur->left);
    int right = Height(cur->right);
    if(left == -1 || right == -1) return -1;
    if(left < right - 1 || left > right + 1)
        return -1;
    return (max(left, right)+1);
}

int main(){
    struct node *root = newNode(1);
    root -> right = newNode(2);
    root -> right -> right = newNode(3);
    
    return 0;
}