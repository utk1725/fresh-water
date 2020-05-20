#include<stdio.h>
void qwkSrt(int *ar,int first,int n){
	int pivot=ar[first];
	int br[10000],cr[10000],I,P=0,Q=0;
	for(I=1;I<=n;I++){
		if(ar[I]<=pivot) printf("%d ",ar[I]);//br[P++]=ar[I];
		else cr[Q++]=ar[I];
	}
	//for(I=0;I<P;I++) printf("%d ",br[I]);
	printf("%d ",pivot);
	for(I=0;I<Q;I++) printf("%d ",cr[I]);
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	qwkSrt(ar,0,n-1);
	return 0;
}
