class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, INT_MIN);
        dp[0] = nums[0];
        dp[1] = max(dp[0], nums[1]);
        for(int i = 2; i < n; i++){
            for(int j = 2; j < n && i - j >= 0; j++){
                dp[i] = max(max(dp[i - 1], dp[i]), dp[i - j] + nums[i]);
            }
        }
        return dp[n - 1];
    }
};
