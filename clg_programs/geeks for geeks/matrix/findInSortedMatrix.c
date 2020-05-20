#include<stdio.h>
int main(){
	int x,n,I,J,flag=0;
	scanf("%d",&n);
	int ar[n][n];
	for(I=0;I<n;I++){
		for(J=0;J<n;J++) scanf("%d",&ar[I][J]);
	}
	scanf("%d",&x);
	I=0;J=n-1;
	while(I<n && J>=0){
		int dup=ar[I][J];
		if(dup==x) {
			printf("found\n");
			printf("%d %d\n",I,J);flag=1;
			break;	
		}
		if(x<dup) J--;
		else I++;
	}
	if(flag==0) printf("not found");
	return 0;
}
