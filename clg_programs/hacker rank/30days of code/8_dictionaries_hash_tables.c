#include<stdio.h>
int main(){
	int N,I;
	scanf("%d",&N);
	char phn[N][100],name[N][100];
	for(I=0;I<N;I++){
		scanf("%s",name[I]);
		scanf("%s",phn[I]);
	}
	
	return 0;
}
