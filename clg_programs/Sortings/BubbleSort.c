/* Bubble sort
   Phani kumar
*/
#include<stdio.h>
void bubble_sort(int ar[],int n){
	int i,j,tmp,unsort=1;
	for(i=0;i<n ;i++){
		unsort=0;
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){ //by changing this greaterthan sign we can sort descending
				tmp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=tmp;
				unsort=1;
			}
		}
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	bubble_sort(ar,n);
	for(i=0;i<n;i++) printf("%d ",ar[i]);
	return 0;
}