#include<stdio.h>
#include<stdlib.h>
int main(){
	char name[100];
	gets(name);
	printf("%s\n",name);

	char name2[100];
	fgets(name2,100,stdin);
	printf("%s\n",name2);
	
	char name3[100];
	scanf("[^\n]%*c",name3);
	printf("%s\n",name3);
	return 0;
}