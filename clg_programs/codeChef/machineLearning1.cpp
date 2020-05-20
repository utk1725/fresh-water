#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int ans1=1,ans2=1;
	int n,x; cin >>n;
	deque<int> dek;
	for(int i=0;i<n;i++) {cin>>x; dek.push_back(x);}
	for(int i=0;i<n;i++) ans1*=dek[i];
	for(int i=dek.size()-1;i>=0;i--) ans2*=dek[i];
	cout << max(ans1,ans2);
	return 0;
}