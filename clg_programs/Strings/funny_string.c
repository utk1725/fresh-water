#include<stdio.h>
#include<string.h>
int main(){
	int t,n,I,J,fun;
	scanf("%d",&t);
	while(t--){
	char ar[10000];
	scanf("%s",ar);
	n = strlen(ar);
	fun=1;
	for(I=1,J=n-1;I<n && J>=1;){
		//printf("%d\t%d\n",ar[I]-ar[I-1],ar[J-1]-ar[J]);
		if(abs(ar[I]-ar[I-1])!=abs(ar[J-1]-ar[J])){
			fun=0;break;
		}
		I=I+2;J=J-2;
	}
	if(fun==1) printf("Funny\n");
	else printf("Not Funny\n");}
	return 0;
}
