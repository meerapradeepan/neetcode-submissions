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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {return root; }
        if (root->right == nullptr && root->left == nullptr) {return root; }
        auto newleft = invertTree(root->right); 
        auto newright = invertTree(root->left);
        root->left = newleft;
        root->right = newright; 
        return root; 
    }
};
