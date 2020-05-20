#include<stdio.h>
int main(){
	int t,m,I,J,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		scanf("%d",&n);
		int ar[n];
		for(I=0;I<n;I++) scanf("%d",&ar[I]);
		for(I=0;I<n-1;I++){
			for(J=I+1;J<n;J++){
				if(ar[I]+ar[J]==m){
					printf("%d %d\n",I+1,J+1);
				}
			}
		}
	}
	return 0;
}
