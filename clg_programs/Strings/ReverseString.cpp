#include<stdio.h>
#include<string.h>
int main(){
	char str[100],tmp;
	gets(str);
	int len=strlen(str),j=0;
//	while(str[len]!='\0')
//		len++; 
//we can use above loop technique to count length of the string..insetead of using strlen function
	while(len>j){
		tmp=str[j];
		str[j]=str[len-1];
		str[len-1]=tmp;
		len--;j++;
	}
	puts(str);
	return 0;
}
