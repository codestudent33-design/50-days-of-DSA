
# 50 Days of DSA

## Goal
- Practice DSA daily
- Improve problem solving
- Solve LeetCode and Codeforces problems

## Languages
- C++

## Platforms
- LeetCode
- Codeforces

Problem 1: Two Sum

Approach:

Used a hash map to store previously seen numbers and their indices.
For each element, calculated the complement (target - current number).
If the complement was already present in the hash map, returned the indices immediately.

Complexity:

⏱️ Time Complexity: O(n)
💾 Space Complexity: O(n)

Key Learning:

Learned how hash maps can reduce the time complexity from O(n²) to O(n).
Problem 2: Remove Linked List Elements

Approach:

Traversed the linked list and removed nodes whose value matched the given target.
Handled cases where the head node itself needed to be removed.
Updated pointers carefully to maintain the linked list structure.

Complexity:

⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)

Key Learning:

Improved understanding of linked list traversal, node deletion, and handling edge cases involving the head node.