//https://www.hackerrank.com/challenges/electronics-shop/problem
#include<iostream>
using namespace std;
int main(){
	int s,n,m;
	cin >>s >> n >> m;
	int key[n]; int drive[m];
	for(int i=0;i<n;i++) cin >>key[i];
	for(int i=0;i<m;i++) cin >>drive[i];
	int ans=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int cost= key[i]+drive[j];
			if(cost==s) {ans=s; break;}
			if(cost<s && cost > ans) ans=cost;
		}
	}
	cout << ans;
	return 0;
}