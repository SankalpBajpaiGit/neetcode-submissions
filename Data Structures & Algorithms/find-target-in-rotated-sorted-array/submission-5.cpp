class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int i;
        int ans = -1;
        while(l < r){
            int m = (l + r) / 2;
            if(nums[m] > nums[r]) l = m + 1;
            if(nums[m] <= nums[r]) r = m;
        }
        if(target >= nums[l] && target <= nums[nums.size() - 1]){
            r = nums.size() - 1;
        }
        else{
            r = l;
            l = 0;
        }
        while(l <= r){
            int mid = (l + r) / 2;
            if(target < nums[mid]){
                r = mid - 1;
            }
            else if(target > nums[mid]){
                l = mid + 1;
            }
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};
