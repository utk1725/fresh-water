#include<stdio.h>
#include<string.h>
int main(){
	int ar[26],I,len,count=0;
	for(I=0;I<13;I++) ar[I]=ar[I+13]=0;
	char str[100];
	scanf("%s",str);
	len=strlen(str);
	for(I=0;I<len;I++){
		ar[str[I]-97]++;
		if(ar[str[I]-97]==1) count++;
	}
	return 0;	
}

