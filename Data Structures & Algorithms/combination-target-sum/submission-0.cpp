class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        vector<int> c;
        bt(target, v, c, 0, nums, 0);
        return v;
    }

    void bt(int target, vector<vector<int>>& v, vector<int> c, int sum, vector<int> nums,int i){
        if(i > nums.size() - 1 || sum > target) return;
        if(sum == target){
            v.push_back(c);
            return;
        }
        c.push_back(nums[i]);
        bt(target, v, c, sum + nums[i], nums, i);
        c.pop_back();
        bt(target, v, c, sum, nums, i + 1);
    }
};
