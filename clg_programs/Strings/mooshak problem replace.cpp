#include<stdio.h>
int main(){
	char str[100],sub[100],rep[100],ans[100];
	gets(str);
	int tst;
	scanf("%d",&tst);
	while(tst--){
		scanf("%s %s",sub,rep);
	int i=0,k,j,loop=0,n=0,x,s,flg;
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
			i=i+j+1;
		else
			i++;n++;loop++;
	}
	ans[n]='\0';
	for(s=0;s<n;s++){
		str[s]=ans[s];
	}
	str[s]='\0';
}
	puts(str);
	return 0;
}
