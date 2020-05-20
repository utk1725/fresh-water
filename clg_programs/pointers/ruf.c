#include<stdio.h>
void swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
}
int main(){
	int a=4,b=3;
	swap(a,b);
	printf("%d %d",a,b);
	return 0;
}
