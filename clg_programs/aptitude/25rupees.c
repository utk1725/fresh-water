#include<stdio.h>
int main(){
	long long int i,j,k;
	printf("%d \n",25*25*25);
		for(i=1;i<=25;i++){
			for(j=i;j<=25;j++){
				for(k=i+j;k<=25;k++){
					printf("%lld %lld %lld\n",i,j,k);
				}
			}
		}
	return 0;
}
