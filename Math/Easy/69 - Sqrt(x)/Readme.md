# Sqrt(x)

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x \*\* 0.5 in python.

```javascript
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
```

## Strat

Perform binary search. Keep mid as long int so (mid \* mid) does not overflow. Init mid as low+(high-low)/2 instead of (high+low)/2 to avoid overflow. If mid\*mid <= x, low=mid+1, else high = mid-1.
