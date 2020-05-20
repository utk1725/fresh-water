#include<stdio.h>
int main(){
	int n,n1;
	scanf("%d",&n);n1=n;
	int ar[n][n];
	if(n%2==0){
		int c=0,I=n-1,J=0,index,g=1,number=n*n;
		while(c<n*n){
			index=0;
			for(;index<n1;index++,J+=g) ar[I][J]=number--;
			c+=index;
			index=0;
			n1--;
			J-=g;
			I-=g;
			if(c>=n*n) break;
			for(;index<n1;index++,I-=g) ar[I][J]=number--;
			c+=index;
			I+=g;
			J-=g;
			g*=(-1);
		}
		for(I=0;I<n;I++){
			for(J=0;J<n;J++) printf("%d	",ar[I][J]);printf("\n");
		}
	}
	else{
		int c=0,I=0,J=n-1,index,g=1,number=n*n;
		while(c<n*n){
			index=0;
			for(;index<n1;index++,J-=g) ar[I][J]=number--;
			c+=index;
			index=0;
			n1--;
			J+=g;
			I+=g;
			if(c>=n*n) break;
			for(;index<n1;index++,I+=g) ar[I][J]=number--;
			c+=index;
			I-=g;
			J+=g;
			g*=(-1);
		}
		for(I=0;I<n;I++){
			for(J=0;J<n;J++) printf("%d	",ar[I][J]);printf("\n");
		}
	}
	return 0;
}
