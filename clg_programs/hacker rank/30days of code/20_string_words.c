#include<stdio.h>
#include<string.h>
int main(){
	char ar[400000];
	gets(ar);
	int slen = strlen(ar),I,count=0;
	for(I=0;I<slen;I++){
		if (ar[I]<65 || ar[I]>122 || (ar[I]>90 && ar[I]<97)) continue;
		else{
			if (ar[I+1]<65 || ar[I+1]>122 || (I+1)>=slen || (ar[I+1]>90 && ar[I+1]<97)) count++;
		}
	}
	printf("%d\n",count);
	for(I=0;I<slen;I++){
		if (ar[I]<65 || ar[I]>122 || (ar[I]>90 && ar[I]<97)) continue;
		if(ar[I+1]<65 || ar[I+1]>122 || (I+1)>=slen || (ar[I+1]>90 && ar[I+1]<97)){
			printf("%c\n",ar[I]);
			I++;
		}else printf("%c",ar[I]);
	}
	return 0;
}
