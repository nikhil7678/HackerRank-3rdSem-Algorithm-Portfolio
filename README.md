# HackerRank 3rd Semester Algorithm Portfolio

**Student:** Nikhil  
**USN / Student ID:** `ADD-USN-HERE`  
**Semester:** 3rd Semester  
**Language:** C++  
**GitHub:** https://github.com/nikhil7678/HackerRank-3rdSem-Algorithm-Portfolio  
**HackerRank:** `ADD-HACKERRANK-PROFILE-HERE`

## About
This repository contains solutions and algorithm analysis for the five mandatory problems in the 3rd Semester HackerRank Algorithms activity. Each solution is written in C++ with a focus on correctness, efficiency, readability, and Big-O analysis.

## Problem Summary

| # | Problem | Technique | Time | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | One-pass min/max tracking | O(N) | O(1) |
| 2 | Birthday Cake Candles | Maximum tracking + counting | O(N) | O(1) |
| 3 | Insertion Sort – Part 1 | Insertion/shift | O(N) | O(1) |
| 4 | Binary Search | Divide and conquer | O(log N) | O(1) |
| 5 | Mark and Toys | Sorting + greedy | O(N log N) | O(N) |

## Solutions

1. [Mini-Max Sum](./01-Mini-Max-Sum/solution.cpp)
2. [Birthday Cake Candles](./02-Birthday-Cake-Candles/solution.cpp)
3. [Insertion Sort – Part 1](./03-Insertion-Sort-Part-1/solution.cpp)
4. [Binary Search](./04-Binary-Search/solution.cpp)
5. [Mark and Toys](./05-Mark-and-Toys/solution.cpp)

## Algorithm Analysis

### 1. Mini-Max Sum
**Approach:** Track the total sum, minimum value, and maximum value in one traversal. The minimum possible sum is total minus the maximum element, while the maximum possible sum is total minus the minimum element.

**Time:** O(N)  
**Auxiliary space:** O(1)  
**Alternative:** Sort the array first, which takes O(N log N). The one-pass method is more efficient.

### 2. Birthday Cake Candles
**Approach:** Maintain the largest candle height seen so far and the number of times it occurs. Reset the count when a larger height appears and increment it when an equal maximum appears.

**Time:** O(N)  
**Auxiliary space:** O(1)  
**Alternative:** Sort and count from the end; this takes O(N log N), so a one-pass scan is preferable.

### 3. Insertion Sort – Part 1
**Approach:** Save the last element as the key, shift every larger element one position to the right, and insert the key into its correct position.

**Time:** O(N) for the required single insertion operation; the complete insertion-sort algorithm is O(N²) in the worst case.  
**Auxiliary space:** O(1)  
**Alternative:** A library sorting routine is simpler for general sorting, but it does not demonstrate the required insertion-shift technique.

### 4. Binary Search
**Approach:** Repeatedly compare the target with the middle element of a sorted array. If the target is smaller, search the left half; otherwise search the right half.

**Time:** O(log N)  
**Auxiliary space:** O(1) for the iterative implementation.  
**Alternative:** Linear search is O(N), so binary search is better when the input is sorted.

### 5. Mark and Toys
**Approach:** Sort toy prices in ascending order and repeatedly purchase the cheapest available toy while the budget allows.

**Time:** O(N log N) due to sorting.  
**Auxiliary space:** O(N) for the vector representation and sorting implementation.  
**Alternative:** For a restricted small integer price range, counting/frequency methods can reduce sorting overhead, but sorting is straightforward and appropriate here.

## HackerRank Evidence
- HackerRank profile: **ADD-HACKERRANK-PROFILE-HERE**
- Accepted submission links: **Add actual accepted submission URLs after completing each challenge.**
- Screenshots: **Add genuine HackerRank accepted-status screenshots here.**
- Badge evidence: **Add genuine badge screenshot/link if earned.**

> Evidence must represent the student's actual HackerRank submissions. No fabricated screenshots or badge claims are included in this repository.

## Reflection
Working through these five problems strengthened my understanding of fundamental algorithmic strategies. Mini-Max Sum and Birthday Cake Candles demonstrated how a single traversal can solve array problems efficiently without unnecessary sorting. Insertion Sort – Part 1 helped me understand how elements are shifted to maintain order and why insertion sort can become quadratic on unfavorable inputs. Binary Search showed the importance of exploiting sorted data to reduce the search space by half at every step, giving logarithmic time complexity. Mark and Toys introduced a greedy strategy in which selecting the cheapest available items maximizes the number of purchases within a fixed budget. Comparing the approaches also reinforced the importance of choosing algorithms based on both input constraints and complexity. Maintaining the solutions in GitHub provided practical experience with repository organization, readable source code, documentation, and commit history. Overall, the activity improved my ability to reason about correctness, efficiency, auxiliary space, and trade-offs between alternative solutions.

## Submission Checklist
- [x] Five solution files
- [x] Separate folder for every problem
- [x] Complexity analysis
- [x] Alternative approaches
- [x] README documentation
- [ ] Add USN/student ID
- [ ] Add HackerRank profile URL
- [ ] Add genuine accepted-submission evidence
- [ ] Add badge evidence if earned
