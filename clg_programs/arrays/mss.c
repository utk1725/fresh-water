/*
Program to find maximum sum in sum array
*/
#include<stdio.h>
#include<limits.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int divideAndConquer(int *ar,int n){
	if(n==1) return ar[0];
	int m=n/2,I;
	printf("n is %d m is %d\n",n,m);
	printf("left\t");
	for(I=m-1;I>=0;I--) printf("%d ",ar[I]);printf("\nright\t");
	for(I=m;I<n;I++) printf("%d ",ar[I]);
	int left_MSS=divideAndConquer(ar,m);
	int right_MSS=divideAndConquer(ar+m,n-m);
	int leftsum=INT_MIN,rightsum=INT_MIN,sum=0;
	for(I=m;I<n;I++){
		sum+=ar[I];
		rightsum=max(rightsum,sum);
	}sum=0;
	for(I=m-1;I>=0;I--){
		sum+=ar[I];
		leftsum=max(leftsum,sum);
	}
	int ans=max(left_MSS,right_MSS);
	return max(ans,leftsum+rightsum);
}
int main(){
	int n,I,choice;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	printf("\nans is %d\n",divideAndConquer(ar,n));
	return 0;
}
