/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* Recursion(TreeNode *curNode, TreeNode *p, TreeNode *q){
        if(curNode -> val == p-> val || curNode -> val == q-> val)
            return curNode;
        if(!curNode -> left && !curNode -> right)
            return NULL;
        
        TreeNode *left = NULL, *right = NULL;
        if(curNode -> left)
            left = Recursion(curNode -> left, p, q);
        if(curNode -> right)
            right = Recursion(curNode -> right, p, q);
        if(left && right)
            return curNode;
        // if(left == NULL)
        //     return right;
        // return left;
        return (left == NULL?right:left); 
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return Recursion(root, p, q);
    }
};f