class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = 0;
        int l = 0;
        int r = heights.size() - 1;
        while(l < r){
            mx = max(mx, (min(heights[l], heights[r]) * (r - l)));
            if(heights[r] > heights[l]) l++;
            else r--;
        }
        return mx;
    }
};
