#include<stdio.h>
int check(int x,int ar[],int n){
	if(x<n) return ar[x];
	else return 0;
}
int big_num(int x,int y,int z){
	if(x>y) y=x;
	if(y>z) z=y;
	return z;
}
int no_of_brck(int a,int b,int c,int d){
	if(a==b) return 1;
	else if(a==c) return 2;
	else return 3; 
}
int adding(int a,int b,int c,int d){
	if(a==1) return b;
	else if(a==2) return c;
	else return d;
}
int main(){
	int n,J,t,I,index,choice;
	long long int sum,my_sum1,my_sum2,my_sum3,his_sum1,his_sum2,his_sum3,diff1,diff2,diff3,big;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++){
		scanf("%d",&ar[I]);
	}
	index=0;sum=0;
	for(J=index;J<n;){
		my_sum1=check(J,ar,n);//printf("%d\t",my_sum1);
		my_sum2=check(J,ar,n)+check(J+1,ar,n);//printf("%d\t",my_sum2);
		my_sum3=check(J,ar,n)+check(J+1,ar,n)+check(J+2,ar,n);//printf("%d\n",my_sum3);
		his_sum1=check(J+1,ar,n)+check(J+2,ar,n)+check(J+3,ar,n);//printf("%d\t",his_sum1);
		his_sum2=check(J+2,ar,n)+check(J+3,ar,n)+check(J+4,ar,n);//printf("%d\t",his_sum2);
		his_sum3=check(J+3,ar,n)+check(J+4,ar,n)+check(J+5,ar,n);//printf("%d\n",his_sum3);
		diff1=my_sum1-his_sum1;diff2=my_sum2-his_sum2;diff3=my_sum3-his_sum3;
		//printf("%d\t",diff1);printf("%d\t",diff2);printf("%d\n",diff3);
		big=big_num(diff1,diff2,diff3);//printf("big %d\n",big);
		choice=no_of_brck(big,diff1,diff2,diff3);//printf("choice no %d\n",choice);
		sum=sum+adding(choice,my_sum1,my_sum2,my_sum3);//printf("sum %lld\n",sum);
		if((J+5) > n) break;
		J=index+choice;
		my_sum1=check(J,ar,n);
		my_sum2=check(J,ar,n)+check(J+1,ar,n);
		my_sum3=check(J,ar,n)+check(J+1,ar,n)+check(J+2,ar,n);
		his_sum1=check(J+1,ar,n)+check(J+2,ar,n)+check(J+3,ar,n);
		his_sum2=check(J+2,ar,n)+check(J+3,ar,n)+check(J+4,ar,n);
		his_sum3=check(J+3,ar,n)+check(J+4,ar,n)+check(J+5,ar,n);
		diff1=my_sum1-his_sum1;diff2=my_sum2-his_sum2;diff3=my_sum3-his_sum3;
		big=big_num(diff1,diff2,diff3);
		choice=no_of_brck(big,diff1,diff2,diff3);
		J=J+choice;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
