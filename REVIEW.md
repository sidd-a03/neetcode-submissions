# 🔄 Needs Review / Spaced Repetition

This is a tracker for problems I couldn't solve within 20-30 minutes, needed hints for, or had to look up the optimal solution. 

**Goal:** Revisit unchecked problems after 3-7 days and try to solve them completely from scratch.

## 🔴 High Priority (Stuck / Completely Lost)
- [ ] [Longest Common Prefix](https://neetcode.io/problems/longest-common-prefix/question) - **Date:** 08-03-2026

- [ ] [String Matching in an array](https://neetcode.io/problems/string-matching-in-an-array/question?list=allNC) - **Date:** 10-03-2026

- [ ] [Arranging Coins](https://leetcode.com/problems/arranging-coins/) - **Date:** 17-04-2026
  - *Pattern:* Binary Search on a Math Sequence / Math Derivation O(1)
  - *Why I got stuck:* I knew the `n(n+1)/2` formula and saw the `O(log N)` constraint, but didn't realize you can run Binary Search on a strictly increasing sequence of calculated numbers instead of an actual array. Also need to remember the **Integer Overflow trap** (must use `long long` for the math) and practice deriving the O(1) Completing the Square solution!

- [ ] [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) - **Date:** 17-04-2026
  - *Pattern:* Binary Search (Index Parity / Disruption)
  - *Why I got stuck:* I successfully found the $O(N)$ solution using XOR, but couldn't figure out the left/right movement logic for $O(\log N)$. I need to remember that we aren't searching for a number, we are searching for a **broken pattern**. If the Even-Odd index pair matches, the single element hasn't happened yet (move right). If the Odd-Even pair matches, the pattern is already broken (move left).

## 🟡 Medium Priority (Needed a hint / Suboptimal solution)
- [ ] [Group Anagrams and its (Optimization)](https://neetcode.io/problems/anagram-groups/question) - **Date:** 10-03-2026

- [ ] [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) - **Date:** 2026-03-13
  - *Pattern:* Hash Map / ASCII Array Mapping
  - *Why I got stuck:* I had the right 1-to-1 mapping logic, but fell into two traps: 
    1. Using `s[i] - 'a'` breaks when strings have spaces or symbols. Fix: Use a `vector<int>` of size 256 and index directly with `s[i]`. 
    2. I only tracked `S -> T`. You MUST track both `S -> T` and `T -> S` to ensure a true 1-to-1 mapping.

## 🟢 Successfully Reviewed (Conquered!)
