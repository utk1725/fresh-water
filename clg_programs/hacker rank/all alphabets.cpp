#include<stdio.h>
#include<string.h>
int main(){
	char a[10000],b[2],c[2];
	gets(a);
	int x=0,i=97;
	b[1]='\0';c[1]='\0';
	while(i!=123){
		b[0]=(char)i;c[0]=(char)i-32;
	if(!strstr(a,b) && !strstr(a,c)){
		x++;
		break;
		}i++;
	}
	if(x==0)
		printf("program");
	else
		printf("not program");
	return 0;
}
