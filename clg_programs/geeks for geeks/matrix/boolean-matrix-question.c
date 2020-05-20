#include<stdio.h>
int main(){
	int n,m,I,J,a,b,p,q;
	scanf("%d %d",&n,&m);
	int ar[n][m],br[n][m];
	for(I=0;I<n;I++){
		for(J=0;J<m;J++) scanf("%d",&ar[I][J]);
	}
	for(I=0;I<n;I++){
		for(J=0;J<m;J++) printf("%d ",ar[I][J]);printf("\n");
	}
	for(I=0;I<n;I++){
		for(J=0;J<m;J++){
			if(ar[I][J]==1){
				for(a=0;a<n;a++) br[a][J]=1;
				for(b=0;b<m;b++) br[I][b]=1;
			}
		}
	}
	for(I=0;I<n;I++){
		for(J=0;J<m;J++) printf("%d ",br[I][J]);printf("\n");
	}
	return 0;
}
