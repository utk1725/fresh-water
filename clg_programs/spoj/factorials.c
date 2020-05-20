#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
	int n,I,tmp,ar[200],a_len=0,index;ar[0]=1;
	scanf("%d",&n);
	for(;n>=2;n--){
		tmp=0;index=0;
		for(I=0;I<=a_len;I++){
			tmp=ar[I]*n+tmp;
			ar[index++]=tmp%10;
			tmp/=10;
			}
		while(tmp!=0){
			ar[index++]=tmp%10;
			tmp/=10;
			}
		a_len=index-1;
		}
		for(I=a_len;I>=0;I--) printf("%d",ar[I]);printf("\n");
	}
	return 0;
}
