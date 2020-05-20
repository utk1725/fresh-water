#include<stdio.h>
int main(){
	int n,i,ze=0,pos=0,neg=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
		if(ar[i]==0) ze++;
		else if(ar[i]<0) neg++;
		else pos++;	
	}
	printf("%0.3f\n",(float)pos/n);
	printf("%0.3f\n",(float)neg/n);
	printf("%0.3f",(float)ze/n);
	return 0;
}
