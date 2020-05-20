//given n array of elements all occurs even num of time except one.finding that odd one
#include<stdio.h>
int odd(int ar[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		res^=ar[i];
		//printf("%d\n",res);
	}
	return res;
}
int main(){
	int ar[]={0,1,2,3,1,2,3};
	int n=sizeof(ar)/sizeof(ar[0]);
	printf("%d",odd(ar,n));
	return 0;
}
