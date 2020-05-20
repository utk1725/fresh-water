#include<stdio.h>
#include<string.h>
#define max 20
int main(){
	char str[max];
	fgets(str,max,stdin);
	printf("%s",str);
	int str_len= strlen(str);
	printf("%d\n",str_len);
	int i;
	for(i=0;i<str_len;i++){
		str[i]=(char)(str[i]+1);
	}
	printf("%s\n",str);
	return 0;
}