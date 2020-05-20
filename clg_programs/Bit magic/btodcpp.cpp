#include<stdio.h>
#include<math.h>
int main(){
	int n,ans=0,p=0;
	scanf("%d",&n);
	while(n!=0){
		if(n%10)
			ans=ans+pow(2,p);
			p++;
		n=n/10;
	}
	printf("%d",ans);
	return 0;
}
