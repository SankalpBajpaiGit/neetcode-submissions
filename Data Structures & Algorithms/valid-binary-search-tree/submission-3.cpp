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
    bool isValidBST(TreeNode* root) {
        return check(root, INT_MIN, INT_MAX);
    }
    bool check(TreeNode* root, int l, int h){
        if(!root) return true;
        if(root -> val >= h || root -> val <= l) return false;
        return check(root -> left, l, root -> val) && check(root -> right, root -> val, h);
        }
};
