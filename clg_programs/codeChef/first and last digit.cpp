//https://www.codechef.com/problems/FLOW004
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,ans; cin>>t;
	long long int n;
	while(t--){
		ans=0;
		cin>>n;
		ans+=(n%10);
		while(1){
			if(n<=9) break;
			n/=10;
		}
		ans+=n;
		cout << ans<<"\n";
	}
	return 0;
}