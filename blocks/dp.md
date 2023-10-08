* Optimal substructure: A big problem can be expressed as a small problem
* Overlapping subproblems: Duplicate computations
---
- Neetocde
- Aditya Verma (YT)
  

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

### 5) Word break
https://leetcode.com/problems/word-break/description/ <br>

![word_break](https://github.com/phani653/fresh-water/assets/25875160/39906796-bd5a-41a5-b4cd-6033372dae52)

Solution: https://leetcode.com/problems/word-break/submissions/
>Traverse diagonally & split words

```
class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        Set<String> wordSet = new HashSet<>(wordDict);
        int n = s.length();
        boolean[][] dp = new boolean[n][n];

        int rowEnd = n-1;
        int colStart = 0;
        while(rowEnd>=0 && colStart<n) {
            
            for(int i=0, j=colStart; i<=rowEnd && j<n; i++, j++) {
                String entireWord = s.substring(i,j+1);
                if(wordSet.contains(entireWord)) {
                    dp[i][j] = true;
                    continue;
                }

                for(int w1End=i; w1End<j; w1End++) {
                    if(dp[i][w1End] && dp[w1End+1][j]) {
                        dp[i][j] = true;
                        break;
                    }
                }
            }

            rowEnd--;
            colStart++;
        }

        return dp[0][n-1];
    }
}
```

### 6) Longest Palindromic Subsequence
https://leetcode.com/problems/longest-palindromic-subsequence/ <br>
* Implementation logic is same as word break problem. We need to find answer for 1 len string, 2 len string, 3 len string ....
  ![longest_palindromic_subseq](https://github.com/phani653/fresh-water/assets/25875160/a44cf238-0b9a-454b-bdb9-a0b1e696eeae)

```
class Solution {
    public int longestPalindromeSubseq(String s) {
        int n = s.length();
        int[][] dp = new int[n][n];
        for(int i=0; i<n; i++) {
            dp[i][i] = 1;
        }

        int rowEnd = n-2;
        int colStart = 1;
        while(rowEnd>=0 && colStart<n) {
            for(int row=0, col=colStart; row<=rowEnd && col<n; row++, col++) {
                dp[row][col] = s.charAt(row)==s.charAt(col) ? 2+dp[row+1][col-1] : Math.max(dp[row][col-1], dp[row+1][col]);
            }
            rowEnd--;
            colStart++;
        }
        return dp[0][n-1];
    }
}
```


* https://leetcode.com/problems/max-dot-product-of-two-subsequences/solutions/648528/Finally-a-diagram-to-make-understanding-easy/
