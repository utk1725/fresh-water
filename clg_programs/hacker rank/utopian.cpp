#include<stdio.h>
int main(){
	int t,n,ans;
	scanf("%d",&t);
	while(t--){
		ans=1;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			if(i%2 != 0)
				ans=ans*2;
			else
				ans=ans+1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
