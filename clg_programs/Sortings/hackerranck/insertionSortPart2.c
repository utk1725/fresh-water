#include<stdio.h>
void insrtSort(int ar[],int n){
	int I,J,K,hand;
	for(I=1;I<n;I++){
		hand=ar[I];
		for(J=I-1;J>=0 && ar[J]>hand ;J--) ar[J+1]=ar[J];ar[J+1]=hand;
		for(K=0;K<n;K++) printf("%d ",ar[K]);printf("\n");
	}
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	insrtSort(ar,n);
	
	
	return 0;
}
