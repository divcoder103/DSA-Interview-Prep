# First Non-Repeating Character

## Problem
Given a string, find the first character that does not repeat.

---

## Approach 1: Naive

### Idea
For each character, count its occurrences by scanning the string again.

### Time Complexity
O(n²)

### Space Complexity
O(1)

---

## Approach 2: Optimized (Hashing)

### Idea
Use a frequency map to count characters, then traverse the string again
to find the first character with frequency 1.

### Time Complexity
O(n)

### Space Complexity
O(1) (constant since alphabet size is fixed)

---

## Key Learning
Hashing helps optimize repeated scans in string problems.
