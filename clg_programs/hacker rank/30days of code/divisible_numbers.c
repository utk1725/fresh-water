#include<stdio.h>
int main(){
	long long int n,tmp,store,m,I;
	scanf("%lld",&tmp);
	store=tmp;
	if(tmp<10) printf("1");
	else{
		long long int factor=2,sum,prod,len;
		while(1){
			sum=0;prod=1;len=0;
			printf("tmp value %lld\t",tmp);
			n=tmp;
			while(n!=0){
				int digit=n%10;
				if(digit==0){
					sum=0;prod=1;break;
				}else{
					len++;
					sum+=digit;
					prod*=digit;
				}
				n/=10;
			}
			printf("%lld\t%lld\n",sum,prod);
			if(sum>=prod){
				printf("%lld",len);break;
			}else{
					factor++;
					tmp=store*factor;
					while(tmp%10!=0 && ){
						tmp=store*factor;
						factor++;
					}
			}
		}
	}
	return 0;
}
