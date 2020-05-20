#include<stdio.h>
#include<math.h>
int call(int);
void binary(int);
int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	binary(call(n1)+call(n2));
	return 0;
}
int call(int n){
	int p=0,ans=0;
	while(n!=0){
		if(n%10)
			ans=ans+pow(2,p);
		p++;n=n/10;	
	}
	return ans;
}
void binary(int n){
	int ar[50],i=0;
	while(n!=0){
		ar[i++]=n%2;
		n=n/2;
	}
	for(int j=i-1;j>=0;j--){
		printf("%d",ar[j]);
	}
}
