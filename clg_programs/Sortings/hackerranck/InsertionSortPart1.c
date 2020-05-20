/*only one last unsorted element in the array has to be sorted*/
#include<stdio.h>
void insertion_Sort(int ar[],int n){
	int I,J,hand;
	hand=ar[n-1];
		for(J=n-2;J>=0 && ar[J]>hand;J--){
			ar[J+1]=ar[J];
			for(I=0;I<n;I++) printf("%d ",ar[I]);printf("\n");
		}ar[J+1]=hand;
		 for(I=0;I<n;I++) printf("%d ",ar[I]);
	
}
int main(){
	int n,I,J;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	insertion_Sort(ar,n);
	return 0;
}
