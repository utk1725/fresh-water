#include<stdio.h>
int main(){
	long long int t,number,sum;
	scanf("%lld",&t);
	while(t--){
	sum = 0;
	scanf("%lld",&number);
	long long int f1 = 1, f2 = 2,tmp=1;
	if(number<2) printf("0");
	else if(number==2)  printf("2");
	else{
		while(number>tmp){
		if(tmp%2==0) sum+=tmp;
		tmp = f1+f2;
		f1 = f2; f2 = tmp;
	 }
	}
	printf("%lld\n",sum+2);
}
	return 0;
}
/*
Notice That:: Every third term of this series is even.... and the series of even terms goes like 0,2,8,34,... 
so any even term E(n)can be expressed as E(n)= 4*E(n-1) + E(n-2)....
this small knowledge makes the algorithm quite small and effective.
*/
