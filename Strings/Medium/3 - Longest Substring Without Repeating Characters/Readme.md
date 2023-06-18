# Longest Substring Without Repeating Characters

Given a string s, find the length of the longest
substring
without repeating characters.

```javascript
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

## Strat

Run a sliding window, keeping track of max substr len (initially 0) and characters which have appeared in a set. If new char found, add it to set and increase the end pointer. If existing found, remove from set and increase the start pointer. After each char, check if (end - start > len). If yes, update len accordingly
