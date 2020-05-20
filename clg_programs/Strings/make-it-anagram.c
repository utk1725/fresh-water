#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char a[10000],b[10000];
	int ar[26],br[26],len,I,del=0;
	scanf("%s",a);
	len=strlen(a);
	for(I=0;I<len;I++) ar[a[I]-'a']++;
	scanf("%s",b);
	len=strlen(b);
	for(I=0;I<len;I++) br[b[I]-'a']++;
	for(I=0;I<26;I++){
		del+=abs(ar[I]-br[I]);
	}
	printf("%d",del);
	return 0;
}
/*
Alice recently started learning about cryptography and found that anagrams are very useful. Two strings are anagrams of each other if they have same character set and same length. For example strings "bacdc" and "dcbac" are anagrams, while strings "bacdc" and "dcbad" are not.

Alice decides on an encryption scheme involving 2 large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. She need your help in finding out this number.

Given two strings (they can be of same or different length) help her in finding out the minimum number of character deletions required to make two strings anagrams. Any characters can be deleted from any of the strings.

Input Format
Two lines each containing a string.

Constraints
1 <= Length of A,B <= 10000
A and B will only consist of lowercase latin letter.

Output Format
A single integer which is the number of character deletions. 
*/
