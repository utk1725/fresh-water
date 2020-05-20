#include<stdio.h>
#include<string.h>
char getPair(char c){
	if(c==')') return '(';
	else if(c==']') return '[';
	else return '{';
}
int main(){
	char str[100],stak[100],pair;
	int i,flag=1,ind=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		if(str[i]=='(' || str[i]=='[' ||str[i]=='{') stak[ind++]=str[i];
		else if(str[i]==')' || str[i]==']' ||str[i]=='}'){
			if(ind>0){
				pair=getPair(str[i]);
				if(pair!=stak[ind-1]){
					flag=0;break;
				}	else ind--;
			}else{
				flag=0;break;
			}
		}
	}
	if(flag==1 && ind==0) printf("Balanced\n");
	else printf("Not Balanced\n");
	return 0;
}
