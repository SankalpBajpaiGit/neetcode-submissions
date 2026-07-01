class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        bt(candidates, target, 0, ans, v, 0);
        return ans;
    }
    void bt(vector<int>& candidates, int target, int i, vector<vector<int>>& ans, vector<int>& v, int sum){
        if(sum == target){
            ans.push_back(v);
            return;
        }
        if(sum > target || i == candidates.size()){
            return;
        }
        v.push_back(candidates[i]);
        bt(candidates, target, i + 1, ans, v, sum + candidates[i]);
        v.pop_back();
        while(i + 1 < candidates.size() && candidates[i] == candidates[i + 1]){
            i++;
        }
        bt(candidates, target, i + 1, ans, v, sum);
    }
};
