#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n,m,i,ar[26],br[26],ans=0;
	char a[10000],b[10000];
	scanf("%s",a);scanf("%s",b);
	for(i=0;i<25;i++) ar[i]=br[i]=0;
	for(i=0;i<strlen(a);i++) ++ar[a[i+0]-97];
	for(i=0;i<strlen(b);i++) ++br[b[i+0]-97];
	for(i=0;i<26;i++) ans+=abs(ar[i]-br[i]);
	printf("%d ",ans);
	return 0;
}