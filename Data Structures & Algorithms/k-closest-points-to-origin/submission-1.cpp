class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        unordered_map<int, vector<vector<int>>> m;
        for(int i = 0; i < points.size(); i++){
            int d = pow(points[i][0], 2) + pow(points[i][1], 2);
            vector<int> x;
            q.push(d);
            x.push_back(points[i][0]);
            x.push_back(points[i][1]);
            m[d].push_back(x);
        }
        vector<vector<int>> ans;
        int c = 0;
        while(c < k){
            int a = q.top();
            q.pop();
            for(int i = 0; i < m[a].size(); i++){
                ans.push_back(m[a][i]);
                c++;
                if(c >= k) break;
            }
        }
        return ans;
    }
};
