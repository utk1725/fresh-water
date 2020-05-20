//program for replacing with 2nd string whenever you find "a" in first string
#include<stdio.h>
#include<string.h>
int sbstr(char [],char [],int);
int main(){
	char str[100],insrt[10],ans[100],sub[10];
	int i=0,j,x=0;
	gets(str);
	gets(sub);
	gets(insrt);
	while(str[i++]!='\0'){
		if(sbstr(str,sub,i-1)){
			j=0;
			while(insrt[j++]!=0){
				ans[x]=insrt[j-1];
				x++;
			}
		}
		else
			ans[x++]=str[i-1];
	}
	ans[x]='\0';
	puts(ans);
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
