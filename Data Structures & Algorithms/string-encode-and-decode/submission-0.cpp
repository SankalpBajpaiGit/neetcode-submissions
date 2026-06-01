class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int> sizes;
        string s = "";
        for(int i = 0; i < strs.size(); i++){
            sizes.push_back(strs[i].size());
        }
        for(int sz : sizes){
            s += to_string(sz) + ',';
        }
        s += '#';
        for(string i : strs){
            s += i;
        }
        return s;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<int> sizes;
        int i = 0;
        while(s[i] != '#'){
            string cur = "";
            while(s[i] != ','){
                cur += s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        vector<string> ans;
        for(int si : sizes){
            ans.push_back(s.substr(i, si));
            i += si;
        }
        return ans;
    }
};
