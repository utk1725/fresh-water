/*
Program to find maximum sum in sum array
*/
#include<stdio.h>
#include<limits.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int divideAndConquer(int *ar,int n){
	if(n==1) return ar[0];
	int m=n/2,I;
	int left_MSS=divideAndConquer(ar,m);
	int right_MSS=divideAndConquer(ar+m,n-m);
	int leftsum=INT_MIN,rightsum=INT_MIN,sum=0;
	for(I=m;I<n;I++){
		sum+=ar[I];
		rightsum=max(rightsum,sum);
	}sum=0;
	for(I=m-1;I>=0;I--){
		sum+=ar[I];
		leftsum=max(leftsum,sum);
	}
	int ans=max(left_MSS,right_MSS);
	return max(ans,leftsum+rightsum);
}
int bruteForce(int *ar,int n,sbArSiz){
	int sbArSiz,strtIndx,ans = INT_MIN,sum,I;
	for(sbArSiz=1;sbArSiz<=n;sbArSiz++){
		for(strtIndx=0;strtIndx<n;strtIndx++){
			if(sbArSiz+strtIndx>n) break;
			sum=0;
			for(I=strtIndx;I<strtIndx+sbArSiz;I++) sum+=ar[I];
			ans=max(ans,sum);
		}
	}
	return ans;
}
int main(){
	int n,I,choice;
	scanf("%d",&n);
	int ar[n];
	for(I=0;I<n;I++) scanf("%d",&ar[I]);
	printf("\enenter choice 1.BruteForce . 2.divide and conquer. \n");
	scanf("%d",&choice);
	if(choice==1) printf("%d\n",bruteForce(ar,n,));
	else if(choice==2) printf("%d\n",divideAndConquer(ar,n));
	return 0;
}
