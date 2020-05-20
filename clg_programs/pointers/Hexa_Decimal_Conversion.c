#include<stdio.h>
int main(){
	int n,ar[50],*ptr;
	ptr=ar;
	scanf("%d",&n);
	while(n!=0){
		*ptr=n%16;
		n/=16;
		ptr++;
	}ptr--;
	while(ptr>=ar){
		if(*ptr<10) printf("%d",*ptr);
		else printf("%c",*ptr+55);
		ptr--;
	}
	return 0;
}
