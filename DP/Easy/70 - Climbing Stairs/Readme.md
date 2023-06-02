# Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

```javascript
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

## Strat

Solve it like fibonacci, store results from smaller trees in hashmap/array to use memoization and take time complexity from O(2^n) to O(n)
