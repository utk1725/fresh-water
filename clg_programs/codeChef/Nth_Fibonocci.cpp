//https://www.codechef.com/problems/KFIB
#include<iostream>
#define MOD 1000000007
using namespace std;
typedef long long int ll;
int main(){
	ll n,k;
	cin >>n >> k;
	int ar[200005];
	for(int i=1;i<=k;i++) ar[i]=1; // first k slots 1. because n<=k
	ll sm=k;
	for(int i=k+1;i<=n;i++){
		ar[i]=sm;; // first time it is k+1st one..sum is all k's so before loop sm=k. from k+2 it update
		sm=(sm*2)%MOD; // this is previous slot sm+sm. So we are adding 1slot extra which is previous answers first one.
		sm=(sm-ar[i-k])%MOD; //calulating for next slot. So i-k only (previous first one)
	}
	cout << ar[n];
	return 0;
}