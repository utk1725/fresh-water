//not working
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//int call(char [],int);
int main(){
	char str[100],up[100],low[100];
	gets(str);
	str=toupper(str);
	//puts(tolower(str));
//	call(str,1);
//	call(str,2);
	return 0;
}
int call(char sent[100],int x){
	if(x==1)
		puts(tolower(sent));
	else
		puts(toupper(sent));
}
