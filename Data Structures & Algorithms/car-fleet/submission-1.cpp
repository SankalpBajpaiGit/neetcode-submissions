class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;
        for(int i = 0; i < position.size(); i++){
            v.push_back({position[i], speed[i]});
        }
        sort(v.rbegin(), v.rend());
        vector<double> s;
        for(int i = 0; i < v.size(); i++){
            s.push_back(double(target - v[i].first) / v[i].second);
            if(s.size() >= 2 && s.back() <= s[s.size() - 2]) s.pop_back();
        }
        return s.size();
    }
};
