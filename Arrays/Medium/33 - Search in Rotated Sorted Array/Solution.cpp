class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1, low = 0;
        while(low <= high) {
            int mid = (low+high) / 2;
            cout<<mid;
            if(target == nums[mid]) return mid;
            if(nums[low] <= nums[mid]) {
                if(target < nums[low] || target > nums[mid]) low = mid+1;
                else high = mid - 1;
            } else {
                if(target < nums[mid] || target > nums[high]) high = mid - 1;
                else low = mid+1;
            }
        }
        return -1;
    }
};