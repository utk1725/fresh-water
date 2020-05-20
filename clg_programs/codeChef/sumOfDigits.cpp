//https://www.codechef.com/problems/FLOW006
#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
	int t,sm; cin >> t;
	ll n;
	while(t--){
		sm=0;
		cin>>n;
		while(n){
			sm+=(n%10);
			n/=10;
		}
		cout << sm << "\n";
	}
	return 0;
}