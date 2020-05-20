#include<stdio.h>
int main(){
	int n,I,result=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&I);
		result^=I;
	}
	printf("%d",result);
	return 0;
}