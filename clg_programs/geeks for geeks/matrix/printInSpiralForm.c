#include<stdio.h>
int main(){
	int n,I,J;
	scanf("%d",&n);
	int ar[n][n];
	for(I=0;I<n;I++){
		for(J=0;J<n;J++) scanf("%d",&ar[I][J]);
	}
	for(I=0;I<n;I++){
		for(J=0;J<n;J++) printf("%d",ar[I][J]);printf("\n");
	}
	I=J=0;
	int count=0,dupn=n,g=1;
	while(count<n*n){
		int lpl=0;
		for(;lpl<dupn;lpl++,J+=g) { printf("%d ",ar[I][J]); count++; }
		if(count>=n*n) break;
		lpl=0;  dupn--;  J-=g;	I+=g;
		for(;lpl<dupn;lpl++,I+=g){ printf("%d ",ar[I][J]);  count++; }
		I-=g;	J-=g;	g*=(-1);
	}
	return 0;
}
