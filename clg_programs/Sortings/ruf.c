#include<stdio.h>
void merging(int *ar,int low,int mid,int high){
	int br[100000],I=low,J=mid+1,K=0;
	while(I<=mid && J<=high){
		if(ar[I]<=ar[J]) br[K++]=ar[I++];
		else br[K++]=ar[J++];
	}
	while(I<=mid) br[K++]=ar[I++];
	while(J<=high) br[K++]=ar[J++];
	K--;
	while(K>=0){
		ar[low+K]=br[K];
		K--;
	}
}
void merg_sort(int *ar,int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		merg_sort(ar,low,mid);
		merg_sort(ar,mid+1,high);
		merging(ar,low,mid,high);
	}
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	merg_sort(ar,0,n-1);
	for(I=0;I<n;I++) printf("%d ",ar[I]);
	return 0;
}
