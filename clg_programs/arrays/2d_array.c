#include<stdio.h>
int main(){
	int I,row,J,K,col,sum,tmp_sum,ar[6][6];
	for(I=0;I<6;I++){
		for(J=0;J<6;J++) scanf("%d",&ar[I][J]);
	}
	row=col=sum=-100;
	while(row!=4){
		tmp_sum=0;
		for(I=row;I<row+3;I++){
			for(J=col;J<col+3;J++){
				if((I==row+1 && J==col) || (I==row+1 && J==col+2)) continue; // correct
				else tmp_sum=tmp_sum+ar[I][J];
			}
		}
		printf("%d\n",tmp_sum);
		if(sum<tmp_sum) sum=tmp_sum;
		col++;
		if(col>=4){
			row++;col=0;
		}
	}
	printf("%d",sum);
}
/*
0 -4 -6 0 -7 -6
-1 -2 -6 -8 -3 -1
-8 -4 -2 -8 -8 -6
-3 -1 -2 -5 -7 -4
-3 -5 -3 -6 -6 -6
-3 -6 0 -8 -6 -7

-19 ans
*/
