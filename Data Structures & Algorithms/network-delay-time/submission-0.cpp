class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int, int>>> m;
        for(int i = 0; i < times.size(); i++){
            m[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        vector<int> d(n + 1, INT_MAX);
        dfs(m, d, 0, k);
        int ans =*max_element(d.begin() + 1, d.end());
        if(ans == INT_MAX) return -1;
        return ans;
    }
    void dfs(unordered_map<int, vector<pair<int, int>>>& m, vector<int>& d, int time, int k){
        if(time >= d[k]) return;
        d[k] = time;
        for(int i = 0; i < m[k].size(); i++){
            dfs(m, d, time + m[k][i].second, m[k][i].first);
        }
    }
};
