#include<stdio.h>
#include<string.h>
int main(){
	char str[]="phani";
	printf("%s\n",str);
	str[0]='\0';
	int len=strlen(str);
	str[len]='x';
	printf("%s",str);
	return 0;
}
