#include<stdio.h>
int main(){
	int m,n,I,J,K,p,q,sum=0;
	printf("dimensions of both matrices\n");
	scanf("%d %d %d %d",&m,&n,&p,&q);
	if(n!=p) printf("-1");
	else{
		int ar[m][n],br[p][q],ans[m][q];
		printf("1st matrix\n");
		for(I=0;I<m;I++){
			for(J=0;J<n;J++) scanf("%d",&ar[I][J]);
		}
		printf("2ndmatrix\n");
		for(I=0;I<p;I++){
			for(J=0;J<q;J++) scanf("%d",&br[I][J]);
		}
		for(I=0;I<m;I++){
			for(J=0;J<q;J++){
				for(K=0;K<p;K++){
					sum = sum + ar[I][K]*br[K][J];
					printf("%d\n",sum);
				}
				ans[I][J]=sum;sum=0;
			}
		}
		printf("result\n");
		for(I=0;I<m;I++){
			for(J=0;J<q;J++) printf("%d ",ans[I][J]);printf("\n");
 		}
	}
	return 0;
}
