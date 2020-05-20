/* phani kumar */
void selection_sort(int[],int);
#include<stdio.h>
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	selection_sort(ar,n);
	for(I=0;I<n;I++) printf("%d",ar[I]);
	return 0;
}
void selection_sort(int ar[],int n){
	int I,J,min,tmp;
	for(I=0;I<n-1;I++){
		min=I;
		for(J=I+1;J<n;J++){
			if(ar[J]<ar[min]) min=J;
		}
		if(min!=I){
			tmp=ar[I];
			ar[I]=ar[min];
			ar[min]=tmp;
		}
	}
}
