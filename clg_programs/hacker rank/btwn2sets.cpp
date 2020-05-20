//https://www.hackerrank.com/challenges/between-two-sets/problem
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if (a==0) return b;
	else return gcd(b%a,a);
}
int Findgcd(int *ary, int n){
	if(n==0) return 0;
	int ans=ary[0];
	for(int i=1;i<n;i++) ans= gcd(ary[i],ans);
	return ans;
}
int FindLcm(int *ar, int n){
	if(n==0) return 0;
	int ans= ar[0];
	for(int i=1;i<n;i++) ans= (ar[i]*ans) / (gcd(ar[i],ans));
	return ans;
}
int main(){
	int a,b;
	int B[]={16,32,96};
	cout << Findgcd (B,3) << endl;
	//cout << FindLcm (B,3) << endl;
	return 0;
}