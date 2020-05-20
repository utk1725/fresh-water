#include<stdio.h>
int rodCutting(int price[],int len){
	int dup[len+1],I,J,max;
	dup[0]=0;
	for(I=1;I<=len;I++){
		max=-1;
		for(J=0;J<I;J++){
			int tmp =  price[J]+dup[I-(J+1)];
			max = max < tmp ? tmp : max ;
			dup[I] = max;
		}
	}
	return dup[len];
}
int main(){
	int len,I;
	scanf("%d",&len);
	int price[len];
	for(I=0;I<len;I++) scanf("%d",&price[I]);
	printf("%d",rodCutting(price,len));
	return 0;
}
