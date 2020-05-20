//https://www.codechef.com/problems/FCTRL
#include<iostream>
using namespace std;
int main(){
	int t,ans; cin >> t;
	long long int n;
	while(t--){
		ans=0;
		cin >> n;
		for(int i=5; n/i>=1; i*=5)
			ans+=(n/i);
		cout << ans << "\n";
	}
	return 0;
}