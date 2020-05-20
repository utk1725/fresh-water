#include<stdio.h>
int main(){
	int i,j,n,c=0,g=1,ind;
	scanf("%d",&n);
	int ar[n][n],dupn=n,tot=n*n;
	if(n%2==0){
		i=n-1,j=0;
		while(c<n*n){
			ind=0;
			for(;ind<dupn;ind++,j+=g) ar[i][j]=tot--;
			c+=ind;
			dupn--;
			j-=g;
			i-=g;
			ind=0;
			dupn--;
			if(c>=n*n) break;
			for(;ind<dupn;ind++,i-=g) ar[i][j]=tot--;
			c+=ind;
			i+=g;
			j-=g;
			g*=(-1);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;i<n;j++) printf("%d ",ar[i][j]);printf("\n");
	}
	return 0;
}
