#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int ar[n];
	for(i=1;i<=n;i++) scanf("%d ",&ar[i-1]);
	for(i=n-1;i>=0;i--) printf("%d ",ar[i]);
	return 0;
}
