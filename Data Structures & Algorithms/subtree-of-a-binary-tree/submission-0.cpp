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
    bool treesEqual (TreeNode* t1, TreeNode* t2){
        bool vals = t1->val == t2->val;
        bool left = (t1->left != nullptr && t2->left != nullptr && treesEqual(t1->left, t2->left)) 
        || (t1->left == nullptr && t2->left == nullptr);
        bool right = (t1->right != nullptr && t2->right != nullptr && treesEqual(t1->right, t2->right)) 
        || (t1->right == nullptr && t2->right == nullptr);
        return vals && left && right;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        int numFound = 0;
        queue<TreeNode*> frontier; 
        frontier.push(root);
        while(frontier.size() != 0){
            auto curr = frontier.front();
            frontier.pop();
            if (curr->val == subRoot->val && treesEqual(curr, subRoot)) { return true; }
            if (curr->left != nullptr) { frontier.push(curr->left);}
            if (curr->right != nullptr) { frontier.push(curr->right);}
        }
        return false;
        
    }
    
};
