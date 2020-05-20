#include<stdio.h>
#include<string.h>
int main(){
	int flag;
	char sent[100],low[100],store[1];
	gets(sent);
	for(char i=97;i<=123;i++){
	if(!strstr(sent,i)){
		flag=9;
		break;
		}
	}
	return 0;
}
