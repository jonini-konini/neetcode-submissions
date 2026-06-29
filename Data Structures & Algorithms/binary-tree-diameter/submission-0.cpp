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
    int result = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return result;
    }

    int height(TreeNode* curr) {
        int leftHeight = 0;
        int rightHeight = 0;

             if (!curr) {
                return 0;
            }

            leftHeight = height(curr->left);
            rightHeight = height(curr->right);

            result = max(result, (leftHeight + rightHeight));
            return 1 +  max(leftHeight, rightHeight);

        }

};
