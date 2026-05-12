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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stack;
        TreeNode* cur = root;

        while (cur || !stack.empty()) {
            // frontier is not empty 
            // cur is a valid node 

            while (cur) {
                // curr is a valid node 
                // add it to frontier and go down to leftmost leaf
                stack.push(cur);
                cur = cur->left;
            }
            // pop new thing off frontier
            cur = stack.top();
            stack.pop();
            
            res.push_back(cur->val);
            cur = cur->right;
        }

        return res;
    }

//     Initialize an empty result list and an empty stack.
// Set the current node to the root.
// While the current node is not null or the stack is not empty:
// While the current node is not null, push it onto the stack and move to its left child.
//      Pop a node from the stack, add its value to the result.
//      Move to the right child of the popped node.
// Return the result list.

};