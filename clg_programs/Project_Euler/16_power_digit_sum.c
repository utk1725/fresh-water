#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
	int n,index,tmp,I,ar[100000],a_len=0,sum=0;ar[0]=1;
	scanf("%d",&n);
	for(;n>=1;n--){
		index=0;tmp=0;
		for(I=0;I<=a_len;I++){
			tmp=ar[I]*2+tmp;
			ar[index++]=tmp%10;
			tmp/=10;
		}while(tmp!=0){
			ar[index++]=tmp%10;
			tmp/=10;
		}a_len=index-1;
		}//for(I=a_len;I>=0;I--) printf("%d",ar[I]);printf("\n");
		for(I=a_len;I>=0;I--) sum=sum+ar[I];printf("%d\n",sum);
	}
	return 0;
}
/*
#include<stdio.h>
#include<math.h>
int main(){
	int t,n,k,a,b,i,j,carry;
	scanf("%d",&t);
	while(t--){
	a=1,carry=0;scanf("%d",&n);//a=arry length
	int ar[10000],br[10000];ar[0]=1;
	long long int ans=0;
	for(i=1;i<=n;i++){
		b=0;carry=0;
		for(j=0;j<a;j++){
			int x = ar[j]*2;
			if(x<10){
				br[b++]=x+carry;carry=0;	
			}
			else{
				br[b++]=x%10+carry;
				 if(j==a-1) br[b++]=x/10;
				 else carry=x/10;
				
			}
		}
		a=b;
		for(k=0;k<b;k++) ar[k]=br[k];
	}
	for(i=0;i<a;i++) printf("%d",ar[i]);//ans+=ar[i];
//	printf("%lld\n",ans);
 }
	return 0;
}*/
