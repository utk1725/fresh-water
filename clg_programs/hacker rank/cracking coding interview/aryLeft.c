#include<stdio.h>
int main(){
	int n,d,i;
	scanf("%d %d",&n,&d);
	int ar[n];
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	for(i=0;i<n;i++,d++){
		d%=n;
	printf("%d ",ar[d]);
	}
	return 0;
}