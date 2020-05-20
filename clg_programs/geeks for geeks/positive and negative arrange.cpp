#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ar[n],poar[n],negar[n];
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(ar[i]<0){
			negar[a]=ar[i];
			a++;
		}
		else{
			poar[b]=ar[i];
			b++;
		}		
	}
	int re=a;
	for(int i=0,x=0;i<n;i=i+2,x++,a--){
		if(a==0 || b==0)
			break;
			ar[i]=negar[x];
	}
	for(int i=1,x=0;i<n;i=i+2,x++,b--){
		if(b==0 || re==0)
			break;
			ar[i]=poar[x];
	}
	for(int i=0;i<n;i++){
		printf("%d  ",ar[i]);
	}
	return 0;
}
