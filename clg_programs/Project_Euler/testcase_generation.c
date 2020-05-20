#include<stdio.h>
int main(){
	int a1,b1=5;
	a1=b1++;
	printf("%d",a1);
	a1=b1;
	printf("%d",a1);
	return 0;
	int t,n,k,a,b,i,j,carry;
	scanf("%d",&t);
	while(t--){
	a=1,carry=0;scanf("%d",&n);
	long long int ans=0;
	int ar[10000],br[10000];ar[0]=1;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			b=0;carry=0;
		for(j=0;j<a;j++){
			int x = ar[j]*2;
			if(x<10){
				br[b++]=x+carry;carry=0;	
			}
			else{
				br[b++]=x%10+carry;
				 if(j==a-1) br[b++]=x/10;
				 else carry=x/10;
				
			}
			}	
		}
		else{	
		a=0;
		for(j=0;j<b;j++){
			int x = br[j]*2;
			if(x<10){
				ar[a++]=x+carry;carry=0;	
			}
			else{
				ar[a++]=x%10+carry;
				 if(j==b-1) ar[a++]=x/10;
				 else carry=x/10;
				
			}
		}
		}
	}
	if(n%2==0){
		for(i=0;i<a;i++) ans+=ar[i];
	}
	else{
		for(i=0;i<b;i++) ans+=br[i];
	}
	printf("%lld\n",ans);
 }
	return 0;
}
