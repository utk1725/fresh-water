// Author : pk
/*
1 2 3 4 5
10 9 8 7 6
15 14 13 12 11
20 19 18 17 16
25 24 23 22 21
*/
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int x=1;
	for(i=1;i<=n;i++) printf("%d ",i);
	printf("\n");
	for(i=2;i<=n;i++){
		for(j=i*n,x=1;x<=n;j--,x++) printf("%d ",j);
		printf("\n");
	}
	return 0;
}
