#include<stdio.h>
int insrt(int *ar,int n){
	int I,J,shifts=0,hand;
	for(I=1;I<n;I++){
		hand =ar[I];
		for(J=I-1;J>=0 && ar[J]>hand;J--){
			ar[J+1]=ar[J];shifts++;
		}ar[J+1]=hand;
	}return shifts;
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	printf("%d",insrt(ar,n));
	return 0;
}
