#include<stdio.h>
int main(){
	int t,n;
	long long int s1,s2;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	s1 = n*(n+1);
	s1*=(2*n+1);
	s1/=6;
	s2 = n*(n+1)/2;
	s2*=s2;
	printf("%lld\n",s2-s1);
 }
	return 0;
}
