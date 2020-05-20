/*
Author : phani
*/
#include<bits/stdc++.h>
using namespace std;
int hash[100000];
int main(){
	int n; cin >> n;
	int ar[n];
	for(int i=0;i<100;i++) hash[i]=0;
	for(int i=0;i<n;i++) cin>>ar[i];
	for(int i=1;i<=n;i++){
		if(hash[ar[i-1]]==0) hash[ar[i-1]]=-i;
	}
	int pos=-9999,hashIndex=-1;
	for(int i=1;i<=10;i++){ // assuming numbers range 1 to 10
		if(hash[i]<0){
			if(pos < hash[i]){
				pos=hash[i];hashIndex=i;
			}
	}}
	for(int i=1;i<=10;i++) cout << i << "  " << hash[i] << "\n";
	cout << hashIndex ;
	return 0;
}