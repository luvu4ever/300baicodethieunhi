/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int Height(TreeNode *cur){
        if(cur == NULL) return 0;
        return max(Height(cur->left), Height(cur->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int left = Height(root-> left);
        int right = Height(root-> right);
        if(abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
    }
};