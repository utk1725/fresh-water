#include<stdio.h>
void copy(char *s,char *t){
	while(*t++ = *s++);
}
int main(){
	char s[100],t[100];
	gets(s);
	copy(s,t);
	printf("%s",t);
	return 0;
}
