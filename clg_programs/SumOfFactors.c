#include<stdio.h>
int main(){
	int num,x,sum=0,i,loop=0;
	scanf("%d",&num);
	if(num==1)
	printf("0");
	else{
	for(i=2;i<=num;i++){
		loop++;
		if(num%i==0){
			x=num/i;
			if(i>x)
				break;
			else if(i==x){
				sum=sum+x;
				break;
			}
			else
				sum=sum+i+x;
		}
	}
	printf("%d\n%d",sum+1,loop);
	}
	return 0;
}
