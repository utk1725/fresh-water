* Optimal substructure: A big problem can be expressed as a small problem
* Overlapping subproblems: Duplicate computations
---

### 1) Longest Increasing subsequence sum
https://leetcode.com/problems/best-team-with-no-conflicts/description/ <br>
This is same as longest common subsequence. Subsequence means start anywhere and end anywhere. Multiple subsequences are possible. So our answer can be present at the end of any subsequence. -> find the the increasing subsequence ends at every index and store it in dp[] ary. Maximum of it is our answer. How do you find increasing subsequence ends at every index. It is equal to `max(dp[i], A[i] + dp[j])` where `0>=i<n` and `0 >= j < i`. for i o to n and for j o to i -> find dp[i] which is prev equation. At the end of every out for loop, update maxAsnwer. <br>
#### LIS  
https://leetcode.com/problems/longest-increasing-subsequence/ <br>
It's the variant of the Longest Increasing Subsequence problem. LIS of a list can end anywhere in the list. So, we need to find LIS at every index. LIS of an index is-> `LIS(i) = max(1, LIS(j)+1)` if `ary[i]>ary[j]` where `o>=j<i` <br>

### 2) Edit distance
https://leetcode.com/problems/edit-distance/description/ <br>
![dp_edit_distance](https://github.com/phani653/fresh-water/assets/25875160/e781889b-dfb7-49cc-b33c-169dc99465df)
---

### 3) Largest sum independent set <br>
https://leetcode.com/problems/house-robber-iii/description/ <br>
https://leetcode.com/problems/house-robber-ii/description/ <br>
https://leetcode.com/problems/house-robber/ <br>
* 2 choices -> include the root and pick left child children + right child children (OR) don't include the root and take the left child + right child. <br>
* Here instead of calculating the value for every child. Store the answer whenever you calculate it and re-use it.


### 4) Find N-bit integers that don't have adjacent zeros
* if n=1 -> 0 and 1 -> two numbers possible <br>
* if n=2 -> 01, 10, 11 -> 3 numbers possible <br>
* general idea: - - - - => two choices for the first number 0 or 1. If 0 -> problem reduces to 01- - (i.e. if 0 is filled, definitely next numbers should be 1). By filling 0, the problem is reduced to f(n-2). If the first number is 1, the problem reduces to 1--- (the second number still has two choices if the first is 0). By filling 1, the problem is reduced to f(n-1). With this analysis, f(n) reduced to f(n-1) + f(n-2). And we already knew the answer for n=1 and n=2. The problem is simply a Fibonacci series problem where the first number is 2 and the second number is 3.


