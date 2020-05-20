#include<stdio.h>
#include<string.h>
int main(){
	int n,len,I,ar[26],br[26],count=0,J;
	char rock[100];
	for(I=0;I<26;I++) ar[I]=0;
	for(I=0;I<26;I++) br[I]=0;
	scanf("%d",&n);
	for(J=0;J<n;J++){
		scanf("%s",rock);
		len=strlen(rock);
		for(I=0;I<len;I++){
			br[rock[I]-'a']++;	
		}
		for(I=0;I<26;I++){
			if(br[I]>0) br[I]=1;
		}
		for(I=0;I<26;I++){
			ar[I]+=br[I];
		}
		for(I=0;I<26;I++) br[I]=0;
		//for(I=0;I<26;I++) printf("%d ",ar[I]);printf("\n");
	}
	//for(I=0;I<26;I++) printf("%d ",ar[I]);
	for(I=0;I<26;I++){
		if(ar[I]==n) count++;
	}
	printf("%d",count);
	return 0;
}
/*
hn has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lower-case Latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a gem-element if it occurs at least once in each of the rocks.

Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.

Input Format

The first line consists of an integer, N, the number of rocks.
Each of the next N lines contains a rock's composition. Each composition consists of lower-case letters of English alphabet.

Constraints
1=N=100
Each composition consists of only lower-case Latin letters ('a'-'z').
1= length of each composition =100

Output Format

Print the number of gem-elements that are common in these rocks. If there are none, print 0.
*/
