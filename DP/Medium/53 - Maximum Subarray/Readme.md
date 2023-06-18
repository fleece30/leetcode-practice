# Maximum Subarray

Given an integer array nums, find the
subarray
with the largest sum, and return its sum.

```javascript
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
```

## Strat

For each element, keep track of the max sum till that element. It'll be either sum of the previous elements + new element or the new element. With result as the max in array initially, update it as the max of res and currentmax in every iteration