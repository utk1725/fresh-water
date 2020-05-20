#include<stdio.h>
int sc(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 4;
	else return sc(n-1)+sc(n-2)+sc(n-3);
}
int main(){
	long long int ar[37]={0,1,2,4,7,13,24,44,81,149,274,504,927,1705,3136,5768,10609,19513,35890,66012,121415,223317,410744,755476,1389537,2555757,4700770,8646064,15902591,29249425,53798080,98950096,181997601,334745777,616693474,1132436852,2082876103};
	int s,n;
	scanf("%d",&s);
	while(s--){
		scanf("%d",&n);
		printf("%d\n",ar[n]);
	}
	return 0;
}

/*
int countWaysUtil(int n, int m)
{
	int i;
    if (n <= 1)
        return n;
    int res = 0;
    for (i = 1; i<=m && i<=n; i++)
        res += countWaysUtil(n-i, m);
    return res;
}
 
int countWays(int s, int m)
{
    return countWaysUtil(s+1, m);
}
 
int main ()
{
    int s,n,m = 3;
	scanf("%d",&s);
	while(s--){
		scanf("%d",&n);
		printf("%d\n",countWays(n,m));
	}
    return 0;
}*/