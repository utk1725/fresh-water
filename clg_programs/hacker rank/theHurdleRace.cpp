//https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include<iostream>
using namespace std;
int main(){
	int n,k;
	int bev=0;
	cin >> n; cin >> k;
	int ar[n];
	for(int i=0;i<n;i++) cin >> ar[i];
	for(int i=0;i<n;i++){
		if(ar[i] > k){
			bev += (ar[i]-k);
			k= ar[i];
		}
	}
	cout << bev;
	return 0;
}