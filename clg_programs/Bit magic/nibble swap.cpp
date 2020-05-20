#include<stdio.h>
void nibswp(int n){
	printf("%d",(n & 0x0F)<<4 | (n& 0xF0)>>4);
}
int main(){
	int n;
	scanf("%d",&n);
	nibswp(n);
}
