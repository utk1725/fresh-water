#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
	long long int t,n,sum,flag,i;
	scanf("%lld",&t);
	while(t--){
		sum=0;i=1;flag=0;
		scanf("%lld",&n);
		while(sum<n){
			sum=sum+i++;
			if(sum==n){
				flag=1; break;
			}
		}
		if(flag==1) printf("Go On Bob %lld\n",i-1);
		else printf("Better Luck Next Time\n");
	}
	return 0;
}
