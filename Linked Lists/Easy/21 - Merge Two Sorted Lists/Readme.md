# Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

## Screenshots

![App Screenshot](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

```javascript
Input: (list1 = [1, 2, 4]), (list2 = [1, 3, 4]);
Output: [1, 1, 2, 3, 4, 4];
```

## Strat

If any point is null, return the other. If first <= second, res = first, res->first = recCall(first->next, second). Analogous statement for else case. Return res
