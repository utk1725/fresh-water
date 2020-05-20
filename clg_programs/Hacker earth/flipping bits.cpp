#include<stdio.h>
#include<math.h>
int main(){
	int t,ar[32],i,set;
	unsigned int n,ans;
	scanf("%d",&t);
	while(t--){
		ans=0,set=1;
		for(i=0;i<32;i++) ar[i]=1;
		scanf("%u",&n);
		while(n!=0){
			ar[32-set]=!(n%2);
			set++;n=n/2;
		}
		for(i=31;i>=0;i--) ans=ans+(ar[i]*pow(2,31-i));
		printf("%lld",ans);
	}
	return 0;	
}
/*
unsigned x;
cin >> x;
cout << ~x << endl;
*/
