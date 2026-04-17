class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int i = 0, ans = 0;
        unordered_set<char> m;
        for (int j = 0; j < s.size(); j++) {
            while (m.count(s[j])) {
                m.erase(s[i]);
                i++;
            }
            m.insert(s[j]);
            ans = max(ans, (int)m.size());
        }
        return ans;
    }
};

