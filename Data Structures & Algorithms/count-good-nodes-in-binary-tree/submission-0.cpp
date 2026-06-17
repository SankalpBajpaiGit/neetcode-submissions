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
    int goodNodes(TreeNode* root) {
        int c = 1;
        int mx = INT_MIN;
        dfs(root, mx, c);
        return c;
    }
    void dfs(TreeNode* root, int mx, int &c){
        if(!root) return;
        mx = max(mx, root -> val);
        if(root -> left && root -> left -> val >= mx) c++;
        if(root -> right && root -> right -> val >= mx) c++;
        dfs(root -> left, mx, c);
        dfs(root -> right, mx, c);
    }
};
