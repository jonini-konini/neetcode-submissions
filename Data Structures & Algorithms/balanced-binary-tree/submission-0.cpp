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
    bool balance = true;

    bool isBalanced(TreeNode* root) {
        dfs(root);
        return balance;
    }

    int dfs(TreeNode* root) {
        int leftHeight = 0;
        int rightHeight = 0;

        if (!root) {
            return 0;
        }

        leftHeight = dfs(root->left);
        rightHeight = dfs(root->right);

        if ((leftHeight - rightHeight > 1) || 
            (rightHeight - leftHeight > 1)) {
            balance = false;
        }

        return 1 + max(leftHeight, rightHeight);



        
    }
};
