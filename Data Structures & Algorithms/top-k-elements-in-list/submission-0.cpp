class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        for(int x : nums) cnt[x]++;
        vector<vector<int>> freq(nums.size() + 1);
        for(auto &[num, f] : cnt)
        freq[f].push_back(num);
        vector<int> ans;
        for(int i = nums.size(); i >= 1 && k > 0; i--){
            for(int num : freq[i]){
                ans.push_back(num);
                if(--k == 0) break;
            }
        }
        return ans;
    }
};
