#include<stdio.h>
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		int n,found=0;
		scanf("%d",&n);
		int ar[100000],left[100000],right[100000];
		long long int sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&ar[i]);
			sum=sum+ar[i];
			left[i]=sum;
		}sum=0;
		int j=0;
		for(i=n-1;i>=0;i--){
			sum=sum+ar[i];
			right[j++]=sum;
		}
		if(left[n-2]==0 || right[n-2]==0) printf("YES\n");
		else{
			for(i=0;i<=n-3;i++){
			 if(left[i]==right[n-3-i]){
				found++;break;
			}
		}
		if(found!=0) printf("YES\n");
		else printf("NO\n");	
		}
	}
	return 0;
}
