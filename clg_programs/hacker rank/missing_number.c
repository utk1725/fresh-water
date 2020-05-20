#include<stdio.h>
int main(){
	long long int I,n,m,min=10001,max=0;
	int num,ar[10001],br[10001];
	scanf("%lld",&n);
	for(I=1;I<=n;I++){
		scanf("%d",&num);
		ar[num]++;
	}
	scanf("%lld",&m);
	for(I=1;I<=m;I++){
		scanf("%d",&num);
		min = min>num?num:min;
		max = max>num?max:num;
		br[num]++;
	}
	for(I=min;I<=max;I++){
		if(ar[I]!=br[I]){
			int no=br[I]-ar[I];
			while(no--){
			 printf("%d ",I);	
			}
		}
	}
	return 0;
}
