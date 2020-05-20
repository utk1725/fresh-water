#include<stdio.h>
#include<math.h>
int main(){
	int t;
	float f,i;
	scanf("%d",&t);
	while(t--){
		scanf("%f",&i);
		f=8*i+1;
		f=sqrt(f);
		if(f*f==i) printf("Go On Bob\n");
		else printf("Better Luck Next Time\n");
	}
	return 0;
}
