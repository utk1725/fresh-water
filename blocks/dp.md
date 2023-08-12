* Optimal substructure: A big problem can be expressed as a small problem
* Overlapping subproblems: Duplicate computations
---

### 1) Longest Increasing subsequence sum
https://leetcode.com/problems/best-team-with-no-conflicts/description/ <br>
This is same as longest common subsequence. Subsequence means start anywhere and end anywhere. Multiple subsequences are possible. So our answer can be present at the end of any subsequence. -> find the the increasing subsequence ends at every index and store it in dp[] ary. Maximum of it is our answer. How do you find increasing subsequence ends at every index. It is equal to `max(dp[i], A[i] + dp[j])` where `0>=i<n` and `0 >= j < i`. for i o to n and for j o to i -> find dp[i] which is prev equation. At the end of every out for loop, update maxAsnwer. <br>
#### LIS  
https://leetcode.com/problems/longest-increasing-subsequence/ <br>
It's the variant of the Longest Increasing Subsequence problem. LIS of a list can end anywhere in the list. So, we need to find LIS at every index. LIS of an index is-> `LIS(i) = max(1, LIS(j)+1)` if `ary[i]>ary[j]` where `o>=j<i` <br>

### Edit distance
https://leetcode.com/problems/edit-distance/description/ <br>
![dp_edit_distance](https://github.com/phani653/fresh-water/assets/25875160/e781889b-dfb7-49cc-b33c-169dc99465df)
