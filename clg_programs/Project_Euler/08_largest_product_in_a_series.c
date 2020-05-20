#include<stdio.h>
int main(){
	int t,n,k,j,a;
	scanf("%d",&t);
	while(t--){
	int index=0;
	scanf("%d %d",&n,&k);
	char number[n];
	scanf("%s",number);
	long long int product,big=0;
	for(j=1;j<=(n-k)+1;j++){
		product=1;
		for(a=j-1;a<=j+k-2;a++) product*=(number[a]-48);
		big = (product>big)?product:big;
		}
		printf("%lld\n",big);
	}
	return 0;
}

/*
instead of taking numbers as a string , initially I took number and using a loop took each digit in number into array
*/
