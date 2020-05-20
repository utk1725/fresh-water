//https://www.codechef.com/MARCH18B/problems/CHEGLOVE
#include<bits/stdc++.h>
using namespace std;
string glove(vector<long long int> finger,vector<long long int> sheath,int n){
	int front=1, back=1;
	for(long long int i=0;i<n;i++){
		if(!front and !back) break;
		if(front){
			if(sheath[i]<finger[i]) front=0;
		}
		if(back){
			if(sheath[n-i-1]<finger[i]) back=0;
		}
	}
	if(!front and !back) return "none\n";
	if(front and back) return "both\n";
	if(front) return "front\n";
	return "back\n";
}
int main(){
	int t; scanf("%d",&t);
	long long int n;
	while(t--){
		scanf("%lld",&n);
		vector<long long int> finger(n);
		vector<long long int> sheath(n);
		for(long long int i=0;i<n;i++) scanf("%lld",&finger[i]);
		for(long long int i=0;i<n;i++) scanf("%lld",&sheath[i]);
		cout << glove(finger, sheath, n);
	}
	return 0;
}