#include<stdio.h>
#include<math.h>
#define a 10
int binary_num(int);
int main(){
	scanf("%d",&n);
	//printf("%d",sizeof(ar));
	printf("%d",binary_num(n));
	return 0;
}
int binary_num(int n){
	int ar[100],x=0,ans=0;
	while(n!=0){
		ar[x++]=n%2;
		n=n/2;
	}
	//insetead of writing this loop we can directly print array elements in reverse order.
	for(int i=x-1;i>=0;i--){
		ans=ans+ar[i]*pow(10,i);
	}
	return ans;
}
