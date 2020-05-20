#include<stdio.h>
static int a=10;
void pi(){
	static int x=0;
	int y=0;
	//printf("%d-%d\n",++x,++y);
}
int main(){
	int i;
	a++;
	printf("%d\n",a);
	for(i=1;i<=5;i++) pi();
	return 0;
}
