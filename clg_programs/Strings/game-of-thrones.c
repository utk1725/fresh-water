/*


Problem: Given a string. tell whether any anagram of given sub-string will be palindrome

Approach: Suppose length of given string is l. then, If any anagram of given string will be palindrome if X[i] = X[l-1-i] where X is given string. So, every character has to be repeated even number of time . only one of the character can happen odd number of times which will occur in middle of string .

*/
#include<stdio.h>
#include<string.h>
int main(){
	int br[27],I,n,flag,odd,len;
	char ar[100000];
	scanf("%s",ar);
	n=strlen(ar);
	for(I=0;I<26;I++) br[I]=0;
	for(I=0;I<n;I++){
		int tmp=ar[I]-'a';
		br[tmp]++;
		//printf("%d\t%d\n",I,br[tmp]);
	} 
	odd=0;flag=1;len=0;
	for(I=0;I<26 && len<n;I++){
		len+=br[I];
		if( (br[I]%2) !=0) odd++;
		if(odd>1){
			flag=0;break;
		}
	}
	if(flag==1) printf("YES");
	else printf("NO");
	return 0;
}
/*
C++ code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string str;
    cin>>str;
    int A[26];
    for(int i =0 ; i<26 ; i++)
        A[i] = 0;
    for(int i=0 ; i<str.length() ; i++ )
    {
       A[str[i] - 'a']++;
    }

    int sum = 0;
    for(int i=0 ; i<26 ; i++)
    {
        sum = sum + (A[i]%2);
    }

    if(sum>=2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
*/
/*
The king has a string composed of lowercase English letters. Help him figure out whether any anagram of the string can be a palindrome or not.

Input Format
A single line which contains the input string.

Constraints
1= length of string =105
Each character of the string is a lowercase English letter.

Output Format
A single line which contains YES or NO in uppercase.

Sample Input : 01

aaabbbb

Sample Output : 01

YES

Explanation
A palindrome permutation of the given string is bbaaabb.

Sample Input : 02

cdefghmnopqrstuvw

Sample Output : 02

NO

Explanation
You can verify that the given string has no palindrome permutation.

Sample Input : 03

cdcdcdcdeeeef

Sample Output : 03

YES

Explanation
A palindrome permutation of the given string is ddcceefeeccdd.
*/
