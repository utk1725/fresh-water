//https://www.codechef.com/problems/FCTRL2
#include<iostream>
#include<deque>
using namespace std;
typedef long long int ll;
int main(){
	int t,n; cin >> t;
	ll ans;
	deque<int> dek;
	while(t--){
		dek.clear(); dek.push_back(1);
		cin>>n;
		for(int i=2;i<=n;i++){
			int carry=0;
			for(int j=0;j<dek.size();j++){
				int pro= dek[j]*i+carry;
				dek[j]=pro%10;
				carry= pro/10;
			}
			while(carry){
				dek.push_back(carry%10);
				carry/=10;
			}
		}
		for(int k=dek.size()-1;k>=0;k--) cout << dek[k];
		cout << "\n";
	}
	return 0;
}
