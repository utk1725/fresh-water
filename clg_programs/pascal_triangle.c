#include<stdio.h>
long long fact(int n){
	long long int I,ans=1;
	for(I=1;I<=n;I++) ans*=I;
	return ans;
}
int main(){
	int no_of_rows,I,J;
	scanf("%d",&no_of_rows);
	for(I=0;I<no_of_rows;I++){
		for(J=0;J<=(no_of_rows-I-2);J++) printf(" ");
		for(J=0;J<=I;J++) 
         printf("%ld ",fact(I)/(fact(J)*fact(I-J)));
		printf("\n");
	}
	return 0;
}
