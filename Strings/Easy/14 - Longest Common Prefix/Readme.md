# Longest Common Prefix


Write a function to find the longest common prefix string amongst an array of strings.


```javascript
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

## Strat

Use Trie.
Insert all words into the trie. Then traverse it until either you reach the end of a word or a branch in the trie. That point is the end of the longest common prefix
