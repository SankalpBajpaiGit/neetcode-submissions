class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int l = 1;
        int r = piles[n - 1];
        int ans = INT_MAX;
        int t = 0;
        while(l <= r){
            int m = (l + r) / 2;
            for(int i = 0; i < n; i++){
                t += ceil(static_cast<double>(piles[i]) / m);
            }
            if(t <= h){
                r = m - 1;
                ans = min(ans, m);
            }
            if(t > h) l = m + 1;
            t = 0;
        }
        return ans;
    }
};
