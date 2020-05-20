#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long N;
		scanf("%lld", &N);
		long long p = 1, f;
		for (f = 2; f*f <= N; ++f) {
			printf("f is %d \n",f);
			printf("N is %d \n",N);
			while (N % f == 0) {
				p = f;
				printf("p is %d \n",p);
				N /= f;
				printf("N in loop is %d \n",N);
			}
		}
		if (N > 1) p = N;
		printf("%lld\n", p);
	}
    
    return 0;
}
/*
#include<stdio.h>
#include<math.h>
int isprime(long long int n){
	long long int i;
	if(n==0 || n==1) return 0;
	else if (n==2) return 1;
	else{
	for(i=2;i<=sqrt(n)+1;i++){
		if(n%i==0){
			return 0;
		}
	}}
	return 1;
}
int main(){
	int t;
	long long int n,i,x;
	scanf("%d",&t);
	while(t--){
	scanf("%lld",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			x = n/i;
			if(x%2==0) continue; // this is line is not mandatory
			if(isprime(x)){
				printf("%lld\n",x);break;
			}
		}	
	}}
	return 0;
}
*/