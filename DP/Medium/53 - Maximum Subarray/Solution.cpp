class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = *max_element(nums.begin(), nums.end());
        int curMax = 0;

        for(int i=0;i<nums.size();i++) {
            int temp = curMax + nums[i];
            curMax = max(temp, nums[i]);
            res = max(res, curMax);
        }

        return res;
    }
};