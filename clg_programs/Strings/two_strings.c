#include<stdio.h>
#include<string.h>
int main(){
	int t,alen,blen,ar[26],br[26],I,min,flag;
	char a[100000],b[100000];
	scanf("%d",&t);
	while(t--){
		for(I=0;I<26;I++) ar[I]=br[I]=0;
		scanf("%s",a);
		alen=strlen(a);
		scanf("%s",b);
		blen=strlen(b);
		min=alen<blen?alen:blen;
		for(I=0;I<alen;I++) ar[a[I]-'a']++;
		for(I=0;I<blen;I++) br[b[I]-'a']++;
		flag=0;
		for(I=0;I<26;I++){
			if(ar[I]>0 && br[I]>0){
				flag=1;break;
			}
		}
		if(flag==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
/*
The problem is the easiest in the set.

The key idea is the following: if two strings contain a common substring, then they contain at least one common symbol. Knowing that the possible symbols are lowercase latin letters, we can just find the set of the symbols that appeared in the first string and the set of the symbols that appeared in the second string. We just have to determine whether the sets' intersection is empty (in this case, we should output "NO") or not (in this case we should output "YES").

The sets' sizes won't exceed 26, that is the number of letters in latin alphabet, so we can check the intersection in any known way.
*/
/*
Problem Statement

You are given two strings, A and B. Find if there is a substring that appears in both A and B.

Input Format

Several test cases will be given to you in a single file. The first line of the input will contain a single integer T, the number of test cases.

Then there will be T descriptions of the test cases. Each description contains two lines. The first line contains the string A and the second line contains the string B.

Output Format

For each test case, display YES (in a newline), if there is a common substring. Otherwise, display NO.

Constraints

All the strings contain only lowercase Latin letters.
1<=T<=10
1<=|A|,|B|<=105

Sample Input

2
hello
world
hi
world

Sample Output

YES
NO

Explanation

For the 1st test case, the letter o is common between both strings, hence the answer YES. (Furthermore, the letter l is also common, but you only need to find one common substring.)
For the 2nd test case, hi and world do not have a common substring, hence the answer NO.

*/
