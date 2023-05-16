class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numbers;
        vector<int> result;
        for(int i=0;i<nums.size();i++) {
            if(numbers.find(target-nums[i]) != numbers.end()) {
                result.push_back(numbers[target-nums[i]]);
                result.push_back(i);
                break;
            }
            if(numbers.find(nums[i]) == numbers.end()) {
                numbers[nums[i]] = i;
            }
        }
        return result;
    }
};