//https://www.codechef.com/problems/FLOW016
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b){
	if(a==0 or b==0) return 0;
	if(a==b) return a;
	else if(a>b) return gcd(a-b,b);
	else return gcd(a,b-a);
}
int main(){
	int t; cin>>t;
	long long int a,b; 
	while(t--){
		cin>>a>>b;
		ll x= gcd(a,b);
		cout << x<< " "<<a*b/x<<"\n";
	}
	return 0;
}