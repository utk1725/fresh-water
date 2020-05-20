/* Bubble sort application 
*/
#include<stdio.h>
void bsort(int ar[],int n,int bound){
	int I,J,tmp;
	for(I=0;I<bound;I++){
		for(J=0;J<n-I-1;J++){//is this loop dont check prior sorted condition
			if(ar[J]>ar[J+1]){ //by changing this greaterthan sign we can sort descending
				tmp=ar[J];
				ar[J]=ar[J+1];
				ar[J+1]=tmp;
			}
		}
	}printf("%d\t",ar[J]);
}
int main(){
	int n,I,bound;
	scanf("%d",&n);
	scanf("%d",&bound);//enter nth number you want to find largest
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	bsort(ar,n);
	return 0;
}
