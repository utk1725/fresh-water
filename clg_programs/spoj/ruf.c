#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);printf("%d\t",n);
	return 0;
}
/*
converting ccase(lower/upper) to another case in given string's each character
int main(){
	char ar[100];
	printf("%d\t%d\t%d\t%d",'A','Z','a','z');
	scanf("%s",ar);
	int I;
	for(I=0;ar[I]!='\0';I++){
		if(ar[I]<='Z' && ar[I]>='A') ar[I]=ar[I]+'a'-'A';
		else if(ar[I]<='z' && ar[I]>='a') ar[I]=ar[I]+'A'-'a';
	}
	printf("%s",ar);
}
*/
