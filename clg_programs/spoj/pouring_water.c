#include<stdio.h>
int check_less(int a,int b,int c){
	if(c>a && c>b) return 0;
	else return 1;
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int a,b,c,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b){
		int tmp = a;
		a=b;
		b=tmp;
	}
	int less=check_less(a,b,c);
	int gcdp=c%gcd(a,b);
	if(less==1 && gcdp==0){
		int A=0,B=0,step=0;
		while(A!=c && B!=c){
			if(A==0){
				A=a;step+=1;
			}else if(B==b){
				B=0;step+=1;
			}else{
				int min = A<(b-B)?A:(b-B);
				B+=min;A-=min;step+=1;
			}
		}printf("%d\n",step);
	}else printf("-1\n");
	}
	return 0;
}
