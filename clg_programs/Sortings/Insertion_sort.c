/* phani kumar */
#include<stdio.h>
void insort(int *ary,int ary_size){
    int iter;
	for(iter=1; iter<ary_size; iter++){
        int hand = ary[iter];
        int sorted_index = iter-1;
        while(sorted_index>=0 && ary[sorted_index]>hand){
            ary[sorted_index+1] = ary[sorted_index];
            sorted_index--;
        }
        ary[sorted_index+1] = hand;
    }
}
int main(){
	int n,I;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	insort(ar,n);
	for(I=0;I<n;I++) printf("%d ",ar[I]);
	return 0;
}