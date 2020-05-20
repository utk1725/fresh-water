#include<stdio.h>
#include<math.h>
int main(){
	int t,flag;;
	scanf("%d",&t);
	while(t--){
		flag=0;
		int n,d;
		scanf("%d %d",&n,&d);
		int ar[n];
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		for(int i=0;i<n-1;i++){
			if(abs(ar[i]-ar[i+1])==d || ar[i]-ar[i+1]==d){
				flag++;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
