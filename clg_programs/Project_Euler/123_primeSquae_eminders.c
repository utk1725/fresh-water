#include<stdio.h>
long long int power(int a,int b){
	long long int ans =1;
	 while(b--) ans = ans*a;
	 return ans;
	}
long long int prime(int n){
	long long int count = 1;
	long long int x = 3,a;
	if(n==1) return 2;
	else{
			while(x){
			int flag = 0;
			for(a=2;a<x;a++){
				if(x%a==0){
					flag = 1;break;
				}
			 }
			if(flag==0) count++;
			if(count==n) return x;
			x++;
		    }
	}return x;
}
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
	long long int number,n=1;
	scanf("%lld",&number);
	long long int p = prime(n);
	while( ( power(p-1,n) + power(p+1,n) ) %  power(p,2) < number ){
		n++;
		p = prime(n);
	}
	printf("%lld\n",n);
 }
	return 0;
}
