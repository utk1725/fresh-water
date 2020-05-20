#include<stdio.h>
void call(int c){
	if(c!=0){
		call(c-1);
		printf("%d",c);
		//printf("%c",(char)c);
	}
}
int main(){
	int x;
	scanf("%d",x);
	call(x);
	return 0;
}
