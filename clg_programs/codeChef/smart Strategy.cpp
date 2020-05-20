//https://www.codechef.com/problems/SMRSTR
#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long int lli;

int main(){
	int n,q,t,a; cin >> t;
	while(t--){
		lli div=1;
		cin >> n >> q;
		for(int i=0;i<n;i++) {
			cin>>a;
			if(div<1e9) div*=a;
		}
		for(int i=0;i<q;i++){
				cin>>a; cout << a/div << " ";
		}
		cout << "\n";
	}
	return 0;
}