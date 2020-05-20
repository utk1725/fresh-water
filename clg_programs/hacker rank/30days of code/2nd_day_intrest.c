#include<stdio.h>
#include<math.h>
int main(){
	int t,x;
	float m;
	scanf("%f",&m);
	scanf("%d",&t);
	scanf("%d",&x);
	float tip =(t*m)/100;
	float tax = (x*m)/100;
	float final_price=m+tip+tax;
	int ans =round(final_price);
	printf("The final price of the meal is $%d.",ans);
	return 0;
}
