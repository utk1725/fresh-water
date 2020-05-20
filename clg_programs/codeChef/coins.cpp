//https://www.codechef.com/problems/COINS
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	long long int n,ans;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans= (n/2)+ (n/3) + (n/4);
		if(ans> n) cout << ans << "\n";
		else cout << n << "\n";
	}
	return 0;
}