#include<stdio.h>
int binary(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",binary(n));
	return 0;
}
int binary(int n){
	int i=0,ar[50];
	while(n!=0){
		ar[i++]=n%2;
		n=n/2;
	}
	int x=i-1,j=0,flag=0;
	while(j<=x){
		if(ar[j]!=ar[x]){
			flag++;
			break;
		}j++;x--;
	}
	if(flag==0) return 1;
	else return 0;
}
