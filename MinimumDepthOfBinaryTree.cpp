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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        if (left_depth && right_depth) {
            return 1 + min(left_depth, right_depth);
        } else {
            return 1 + max(left_depth, right_depth);
        }
    }
};