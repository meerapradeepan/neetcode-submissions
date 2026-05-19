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
    vector<int> preorderTraversal(TreeNode* root) {
        std::stack<TreeNode*> frontier;
        vector<int> preord; 
        if (!root) {return preord;}
        frontier.push(root);
        while (0 != frontier.size()){
            auto curr = frontier.top();
            frontier.pop();
            preord.emplace_back(curr->val);
            
            if (curr->right) frontier.push (curr->right);
            if (curr->left) frontier.push(curr->left); 

        }
        return preord;
    }
};