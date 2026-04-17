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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        trav(root, v, 0);
        return v;
    }

    void trav(TreeNode* root, vector<int>& v, int h){
        if(!root) return;
        if(v.size() == h) v.push_back(root -> val);
        if(root -> right) trav(root -> right, v, h + 1);
        if(root -> left) trav(root -> left, v, h + 1);
    }
};
