#include<stdio.h>
#include<math.h>
int main(){
	int n,n1,t;
	scanf("%d",&t);
	while(t--){
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
	}int I,sum=0;
	for(I=0;I<n;I++) sum+=ar[I][n-1-I];
	for(I=0;I<n;I++) sum+=ar[I][I];
	int x = (int)(pow(10,9)+7);
	if(n%2==0) printf("%d\n",(int)(sum%x));
	else printf("%d\n",(int)((sum-1)%x));
	}
	return 0;
}
