#include<stdio.h>
int main(){
	long long int t,n,X,J,I,long_num;scanf("%lld",&t);
	int count,p_count;
	while(t--){
	long_num=0,p_count=0;
	scanf("%lld",&n);
	int ar[n+1];
	for(I=0,J=n;I<=J;I++,J--) ar[J]=ar[I]=0; //it's need
	for(I=n;I>=1;I--){
		if(I%2==0 || ar[I]==1) continue;//if number already came while doing previous num calculation
		//printf("%lld\t",I);
		count=0;
		X=I;
		while(X!=1){
			if(X%2==0){
				X/=2;
				if(X<=n) ar[X]=1;
			}else{
				X=3*X+1;
				if(X<=n) ar[X]=1;
			}
			count++;
		}
			count+=1;
			//printf("%lld\t",count);
			if(count>p_count){
				long_num=I;
				p_count=count;
			}//printf("%lld\n",long_num);
		}printf("%lld\n",long_num);
	}
	return 0;
}
/*
int main(){
	long long int big,i,t,p_count,c_count,n;scanf("%lld",&t);
	while(t--){
		big=0,p_count=0;
		scanf("%lld",&n);
		for(i=1;i<=n;i++){
			c_count=0;
			long long int x=i;
			while(x>1){
			if(x%2==0) x/=2;
			else x=3*x+1;
			c_count++;
			}
			c_count+=1;
			if(c_count>=p_count){
				big=i;
				p_count=c_count;
			}
		}printf("%lld\n",big);
	}
	return 0;
}*/
