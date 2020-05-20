#include<stdio.h>
#include<math.h>
int main(){
	long long int n,sum1=0,sum2=0,num;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&num);
			if(i==j)
				sum1=sum1+num;
			if(j==n-i-1)
				sum2=sum2+num;
		}
	}
	printf("%lld",abs(sum1-sum2));
	return 0;
}
