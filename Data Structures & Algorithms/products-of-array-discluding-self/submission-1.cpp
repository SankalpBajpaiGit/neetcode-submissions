class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        prefix[1] = nums[0];
        suffix[n - 2] = nums[n - 1];
        for(int i = 2; i < n; i++){
            prefix[i] = prefix[i - 1] * nums[i - 1];
            suffix[n - i - 1] = suffix[n - i] * nums[n - i];
        }
        vector<int> ans(n);
        ans[0] = suffix[0];
        ans[n - 1] = prefix[n - 1];
        for(int i = 1; i < n - 1; i++){
            ans[i] = suffix[i] * prefix[i];
        }
        return ans;
    }
};
