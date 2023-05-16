# Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

```javascript
Input: s = "()";
Output: true;
```

```javascript
Input: s = "(]";
Output: false;
```

## Strat

Create map of pair of parentheses. Loop through string. If opening, add to stack. If closing, check if stack empty or top != pair of closing -> return false, else pop from stack. Finally, is stack empty, return true, else false
