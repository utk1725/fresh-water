#include<stdio.h>
long long int noof(long long int number,long long int n){
	if(number%n==0) return (number/n)-1;
	else return number/n;
	}
int main(){
	long long int t,number;
	scanf("%lld",&t);
	while(t--){
	scanf("%lld",&number);
	long long int n1 = noof(number,3);
	long long int n2 = noof(number,5);
	long long int n3 = noof(number,15);
	long long int sum1 = ((6+(n1-1)*3)*n1)/2;
	long long int sum2 = ((10+(n2-1)*5)*n2)/2;
	long long int sum3 = ((30+(n3-1)*15)*n3)/2;
	printf("%lld\n",sum1+sum2-sum3);
	}
	return 0;
}
/* //c++ code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long s(long long n) { return n * (n+1) / 2; }

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        N -= 1;
        printf("%lld\n", s(N/3)*3 + s(N/5)*5 - s(N/15)*15);
    }
    return 0;
}
*/
