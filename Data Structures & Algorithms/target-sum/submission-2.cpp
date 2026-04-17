class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int i : nums) sum += i;
        if((sum + target) % 2 || abs(target) > sum) return 0;
        int s = (sum + target) / 2;
        vector<int> v(s + 1, 0);
        v[0] = 1;
        for(int i : nums){
            for(int j = s; j >= i; j--){
                v[j] += v[j - i];
            }
        }
        return v[s];
    }
};
