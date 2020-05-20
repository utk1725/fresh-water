#include<stdio.h>
#include<limits.h>
int main(){
	int ans = INT_MIN,ans1=INT_MAX;
	printf("%d\n%d\n",ans,ans1);
	int n,I,sum,cur;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	cur=0;
	for(I=0;I<n;I++){
		cur = cur+ ar[I];
		ar[I]=cur;
	}
	for(I=0;I<n;I++) printf("%d ",ar[I]);
	return 0;
}
