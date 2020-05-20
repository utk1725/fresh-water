#include<stdio.h>
int main(){
	extern int x;
	//x=20;
	printf("%d",sizeof(x));
	return 0;
	}
/*
int main(){
	char far *s1,*s2;
	printf("%d\t%d",sizeof(s1),sizeof(s2));
	return 0;
}
*/
