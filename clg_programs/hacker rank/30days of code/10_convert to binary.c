#include<stdio.h>
int main(){
	int t,n,ar[100000],I;
	scanf("%d",&t);
	while(t--){
		I=0;
		scanf("%d",&n);
		if(n==0) ar[I++]=0;
		else{
			while(n){
				ar[I++]=n%2;
				n/=2;	
			}
		}I--;
		for(;I>=0;I--) printf("%d",ar[I]);printf("\n");
	}
	return 0;
}
