#include<stdio.h>
int ispal(long long int n){
	long long int ans=0,tmp = n;
	while(n){
		ans = 10*ans + (n%10);
		n/=10;
	}
	if(ans==tmp) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	long long int n,i,a;
	while(t--){
	scanf("%lld",&n);
	for(i=n;i>=101101;i--){
		int flag=0;
	if(ispal(i)){ 
	 	for(a=100;a<=999;a++){
			if(i%a==0 && i/a<=999 && i/a>=100){
				flag=1;printf("%d\n",(int)i);break;
			}
	 	}
	 	if(flag==1) break;
		}
	}}
	return 0;
}
