#include<stdio.h>
int main(){
	char str[100],sub[100],rep[100],ans[100];
	gets(str);gets(sub);gets(rep);
	int i=0,k,j,loop=0,n=0,x,flg;
	while(str[i]!='\0'){
		j=0,k=i,flg=0;
		while(str[k]==sub[j] && sub[j]!='\0'){
			j++;k++;
		}
		if(sub[j]=='\0'){
			x=0;flg++;
			loop=k;
			while(rep[x]!='\0'){
				ans[n]=rep[x];
				n++;x++;
			}
		}
		ans[n]=str[loop];
		if(flg==1)
			i=i+j;
		else
			i++;
		n++;loop++;
	}
	ans[n]='\0';
	puts(ans);
	return 0;
}
