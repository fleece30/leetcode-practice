class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, curr = 0;
        while(i<nums.size()) {
            if(nums[i] == nums[curr]) i++;
            else {
                curr++;
                nums[curr] = nums[i];
                i++;
            }
        }
        return curr+1;
    }
};