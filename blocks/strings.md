### Longes Planidromic substring
https://leetcode.com/problems/longest-palindromic-substring/description/ <br>
* For every character of the string, extend it's left side and right side. Stop if characters of left & right are not matching and calculate the length.
Key point to take care is, if we assume the character is middle of the palnidrome, it's easy. We also need to check by assuming the character is one of the middle char of the palindrome.
<br>
So, for i=0; i<strLen -> extend(i, i) also extend(i, i+1) -> inside extend(), we calculate maxLen eveytime

