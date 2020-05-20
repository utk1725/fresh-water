#include<stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int i,n;
	long long lcm=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		lcm = lcm * i / gcd(lcm,i);
	}
	 printf("%d\n",(int)lcm);
    }
	return 0;
}
