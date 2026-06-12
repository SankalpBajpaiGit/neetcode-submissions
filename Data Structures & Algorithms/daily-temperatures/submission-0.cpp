class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> s;
        for(int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while(!s.empty() && t > s.top().first){
                ans[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({t, i});
        }
        return ans;
    }
};
