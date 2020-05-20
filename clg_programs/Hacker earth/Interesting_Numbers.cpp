#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int div=0,count=0;
		int a,b;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			for(int j=1;j<=i;j++){
				if(i%j==0)
					div++;
			}
			if(div%2!=0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
