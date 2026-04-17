class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> t;
        dfs(nums, 0, t, v);
        return v;
    }
    void dfs(vector<int>& nums, int i, vector<int>& t, vector<vector<int>>& v){
        if(i == nums.size()){
            v.push_back(t);
            return;
        }
        t.push_back(nums[i]);
        dfs(nums, i + 1, t, v);
        t.pop_back();
        dfs(nums, i + 1, t, v);
    }
};
