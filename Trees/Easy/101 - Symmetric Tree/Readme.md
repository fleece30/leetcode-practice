# Symmetric Tree

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

## Screenshots

![App Screenshot](https://assets.leetcode.com/uploads/2021/02/19/symtree1.jpg)

```javascript
Input: root = [1, 2, 2, 3, 4, 4, 3];
Output: true;
```

![App Screenshot](https://assets.leetcode.com/uploads/2021/02/19/symtree2.jpg)

```javascript
Input: root = [1, 2, 2, null, 3, null, 3];
Output: false;
```

## Strat

If null tree, return true

If either branch is null, return false

If both pointer values are equal, return recursive with (left of one and right of other) && (right of one and left of other)

Return false at end
