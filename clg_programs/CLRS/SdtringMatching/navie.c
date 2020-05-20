#include<stdio.h>
#include<string.h>
int main(){
	char sm[100],sp[100];
	gets(sm);gets(sp);
	puts(sm);puts(sp);
	int m=strlen(sm);int n=strlen(sp);int i,k,j,flag=0;
	for(i=0;i<=m-n+1;i++){
		j=i;
			for(k=0;k<n;k++,j++){
				if(sp[k]!=sm[j]) break;
		}
		if(k==n){
			printf("found at shift %d\n",i);break;
		}
	}
	return 0;
}