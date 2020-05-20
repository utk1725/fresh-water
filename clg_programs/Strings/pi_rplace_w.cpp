#include<stdio.h>
#include<string.h>
int call(char [],char [],int);
int main(){
	int i=0;
	char st[100],sub[50],rep[50],ans[100];
	gets(st);gets(sub);gets(rep);
	while(st[i]!='\0'){
		if(call(st,sub,i)){
			printf("substring found");
		}
		else
			ans[i]=st[i];
		i++;
	}
	return 0;
}
int call(char str[100],char sub[100],int x){
	int flag=1;
	for(int i=0;i<strlen(sub);i++){
		if(sub[i]!=str[x]){
			flag=0;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
