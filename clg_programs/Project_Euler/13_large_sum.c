#include<stdio.h>
int main(){
	int x,i,n;scanf("%d",&n);
	char ary[n+1][50];
	for(i=1;i<=n;i++){
		scanf("%s",ary[i]);
	}
	int ans[10],sum,carry=0;
	for(x=49;x>=0;x--){
		sum=0;
		for(i=1;i<=n;i++){
			sum=sum+(ary[i][x]-48);
		}
		sum=sum+carry;
		carry=sum/10;
		if(x<=9 && x>=1) ans[x]=sum%10;
		if(x==0) ans[x]=sum;
	}
	if(ans[0]<=9){
		for(i=0;i<=9;i++) printf("%d",ans[i]);
	}
	else if(ans[0]>=10 && ans[0]<=99){
		for(i=0;i<=8;i++) printf("%d",ans[i]);
	}
	else if(ans[0]>=100 && ans[0]<=999){
		for(i=0;i<=7;i++) printf("%d",ans[i]);
	}
	else if(ans[0]>=1000 && ans[0]<=9999){
		for(i=0;i<=6;i++) printf("%d",ans[i]);
	}
	return 0;
}
