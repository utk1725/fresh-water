#include<stdio.h>
void qckSrt(int *ar,int low,int high){
	int pivot= ar[low];
	if(low<high){
		pivot = qs(ar,low,high);
	}
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	qckSrt(ar,0,n-1);
	return 0;
}
