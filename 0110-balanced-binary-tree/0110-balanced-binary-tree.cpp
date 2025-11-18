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

    int checkHeight( TreeNode * root ) {
        if (root == nullptr) {
            return 0;
        }

        else {
            int leftheigtht = checkHeight(root->left);
            if (leftheigtht == -1) return -1;
            int rightheight = checkHeight(root->right);
            if (rightheight == -1) return -1;

            if (abs(leftheigtht - rightheight) > 1) {
                return -1;
            }
            
            return max(leftheigtht,rightheight) +1;
        }
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};