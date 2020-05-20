//program for replacing with 2nd string whenever you find "a" in first string
#include<stdio.h>
#include<string.h>
int sbstr(char [],char [],int);
int main(){
	char str[100],insrt[10],ans[100],sub[10];
	int i=0,j,x=0,confirm;
	gets(str);
	gets(sub);
	gets(insrt);
	while(str[i]!='\0'){
		if(sbstr(str,sub,i)){
			j=0;confirm=100;
			while(insrt[j++]!=0){
				str[i]=insrt[j-1];
				i++;
			}
		}
		else
			str[i]=str[i];
	i++;
	}
	str[x]='\0';
	puts(str);
	return 0;
}
//this is the function to check substring is present in the main string or not
int sbstr(char a[],char b[],int x){
	int flag=0;
		for(int i=0;i<strlen(b);i++){
			if(a[x]!=b[i]){
				flag++;
				break;
			}
			x++;
		}
	if(flag==0)
		return 1;
	else
		return 0;
}
