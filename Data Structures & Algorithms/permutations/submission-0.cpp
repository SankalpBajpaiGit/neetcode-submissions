class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        bt(nums, v, ans, visited);
        return ans;
    }
    void bt(vector<int>& nums, vector<int>& v, vector<vector<int>>& ans, vector<bool>& visited){
        if(v.size() == nums.size()){
            ans.push_back(v);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!visited[i]){
                v.push_back(nums[i]);
                visited[i] = true;
                bt(nums, v, ans, visited);
                v.pop_back();
                visited[i] = false;
            }
        }
    }
};
