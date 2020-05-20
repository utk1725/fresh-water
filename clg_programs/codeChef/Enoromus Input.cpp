//https://www.codechef.com/problems/INTEST
#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
	ll n,num,ans,k; cin >> n>>k;
	ans=0;
	for(ll i=0;i<n;i++){
		cin >>num;
		if(num%k==0) ans++;
	}
	cout << ans;
	return 0;
}
