class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            vector<int> freq(26, 0);
            for(char j : strs[i]){
                freq[j - 'a']++;
            }
            string t = "";
            for(int k = 0; k < 26; k++){
                t += "," + to_string(freq[k]);
            }
            m[t].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(const auto& i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
