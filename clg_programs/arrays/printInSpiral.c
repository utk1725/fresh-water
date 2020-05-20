#include<stdio.h>
int n;
//void spiralPrint(int *ar[n],int n){
	
//}
int main(){
	int I,J;
	scanf("%d",&n);
	int ar[n][n];
	for(I=0;I<n;I++){
		for(J=0;J<n;J++) scanf("%d",&ar[I][J]);
	}
	for(I=0;I<n;I++){
		for(J=0;J<n;J++) printf("%d ",ar[I][J]);printf("\n");
	}
	//spiralPrint(ar,n);
	int i=0,j=0,dupn=n,count=0,g=1;
	while(count<n*n){
		int loopread=0;
		for(;loopread<dupn;loopread++,j+=g) { printf("%d ",ar[i][j]); count++; }
		if(count>=n*n) break;
		loopread=0;
		i+=g;
		j-=g;
		dupn--;
		for(;loopread<dupn;loopread++,i+=g) { printf("%d ",ar[i][j]); count++; }
		i-=g;
		j-=g;
		g*=(-1);
	}
	return 0;
}
