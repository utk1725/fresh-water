#include<stdio.h>
int main(){
	int t,p1,p2,q1,q2;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d",&p1,&p2,&q1,&q2);
		printf("%d %d\n",2*q1-p1,2*q2-p2);
	}
	return 0;
}
