#include<stdio.h>
#include<string.h>
int main(){
	int i,n,count,x,t;
	scanf("%d",&t);
	char str[10000];
	while(t--){
	count=0;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n/2;i++){
		if(str[i]!=str[n-i-1]){
			x=(str[i]+0)-(str[n-i-1]+0);
			if(x<0) x=x*(-1);
			count+=x;
		}
	}
		printf("%d\n",count);
	}
	return 0;	
}
