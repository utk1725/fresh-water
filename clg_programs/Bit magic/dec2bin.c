#include<stdio.h>
int bin(int n){
	static int b=0;
	if (n==0) return b;
	else{
		bin(n/2);
		b=b*10+n%2; // or without taking b directly print here n%2
	}
}
int main(){
	int n;scanf("%d",&n);
	printf("%d",bin(n));
	return 0;
}
