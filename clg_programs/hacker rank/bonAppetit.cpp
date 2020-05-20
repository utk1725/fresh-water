//https://www.hackerrank.com/challenges/bon-appetit/problem
#include<iostream>
using namespace std;
int main(){
	int n, k, paid, tot=0;
	cin >> n >> k;
	int ar[n];
	for(int i=0;i<n;i++) cin >> ar[i];
	cin >> paid;
	for(int i=0;i<n;i++){
		if(i==k) continue;
		tot+=ar[i];
	}
	tot/=2;
	if(tot==paid) cout << "Bon Appetit";
	else cout << paid- tot;
	return 0;
}