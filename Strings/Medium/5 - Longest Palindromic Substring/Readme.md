# Longest Palindromic Substring



Given a string s, return the longest
palindromic
substring
in s.


```javascript
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
```

## Strat

Instead of checking if every substring is a palindrome, go to each letter and then start expanding out in both directions, keeping a note of if the left and right are within bounds and are equal. If the length of this is more than the maxlength, update the answer to this substring and update the maxlength.

Time complexity: O(n^2)