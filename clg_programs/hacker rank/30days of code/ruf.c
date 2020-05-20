#include<stdio.h>
#include<string.h>
int main(){
	int I,sum=0;
	char num[100];
	scanf("%s",num);
	for(I=0;I<strlen(num);I++){
		int tmp=num[I]-48;
		sum+=tmp;
	}
	printf("%d\n",sum);
	return 0;
}
