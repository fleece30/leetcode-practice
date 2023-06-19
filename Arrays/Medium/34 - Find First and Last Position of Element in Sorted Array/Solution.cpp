class Solution {
public:
    int binarySearch(vector<int> nums, int target, bool searchingLeft) {
        int high = nums.size() - 1, low = 0, foundIndex = -1;

        while(low<=high) {
            int mid = (low+high) / 2;
            if(nums[mid] == target) {
                foundIndex = mid;
                if(searchingLeft) high = mid - 1;
                else low = mid + 1;
            } 
            else if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return foundIndex;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        return vector<int>{left, right};
    }
};