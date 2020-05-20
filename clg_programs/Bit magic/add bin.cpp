#include<stdio.h>
int main(){
	int n1,n2,i=0,ar[50],flag=0;
	scanf("%d %d",&n1,&n2);
	while(n1!=0 || n2!=0){
		int a=n1%10,b=n2%10;
		if((a==1 && b==0) || (a==0 && b==1))
			ar[i]=1;
		else if(a==0 && b==0)
			ar[i]=0;
		else{
			ar[i]=0;
			flag++;	
		}
	}
	return 0;
}
