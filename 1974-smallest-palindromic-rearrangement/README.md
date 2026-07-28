# Smallest Palindromic Rearrangement

## Problem

You are given a palindromic string `s`.

Return the lexicographically smallest palindromic permutation of `s`.

## Approach

Since the given string is already a palindrome, we only need to rearrange the first half of the string.

- Count the frequency of characters in the left half.
- Place characters in increasing alphabetical order.
- Put the same character at both left and right positions to maintain palindrome property.
- The middle character remains unchanged.

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Language

C++
