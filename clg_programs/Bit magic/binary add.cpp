#include<stdio.h>
int convert_to_binary(int);
int pow(int,int);
int main(){
	int n,ar[50],i;
	scanf("%d",&n);
	int b_num = convert_to_binary(n);
	printf("%d",b_num);
	return 0;
}
int convert_to_binary(int n){
	int ar[50],i=0,bin=0;
	while(n!=0){
			bin = bin + pow(10,i++)*(n%2);
			n=n/2;
	}
	return bin;
}
int pow(int a,int b){
	int ans = 1;
	for(int i=1;i<=b;i++) ans*=a;
	
	return ans;
}
