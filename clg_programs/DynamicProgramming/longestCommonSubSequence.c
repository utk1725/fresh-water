#include<stdio.h>
#include<string.h>
void lcs(char *x,char *y){
	int i,j,m=strlen(x),n=strlen(y);
	for(i=0;i<m;i++) c[i][0]=0;
	for(j=0;i<n;j++) c[0][j]=0;
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			if(x[i]==y[j]) c[i][j]=c[i-1][j-1]+1;
			else c[i][j]=c[i-1][j]>c[i][j-1] ? c[i-1][j]:c[i][j-1];
		}
	}
	for(i=0;i<m;i++){
	//	for(j=0;i<n;j++) printf("%d ",c[i][j]);printf("\n");
	}
}
int main(){
	char x[100],y[100];
	scanf("%s %s",x,y);
	lcs(x,y);
	return 0;
}
