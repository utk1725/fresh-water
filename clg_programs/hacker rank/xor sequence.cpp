#include<iostream>
using namespace std;
typedef long long int lli;
lli getThat(lli n){
	lli ar[8]={n,n,2,2,n+2,n+2,0,0};
	return ar[n%8];
}
int main(){
	lli t,l,r; cin >> t;
	while(t--){
		cin >> l >> r;
		cout << (getThat(l-1)^getThat(r)) << "\n";
	}
	return 0;
}
/* //https://www.hackerrank.com/challenges/xor-se/problem
#include<iostream>
using namespace std;
typedef long long int lli;
lli takeMyval(lli n){
	if(n==0) return 0; // exception case;
	if(n%4==0) return n;
	else if(n%4==1) return 1;
	else if(n%4==2) return n+1;
	else if(n%4==3) return 0;
}
int main(){
	lli t,l,r,ans; cin >> t;
	/*for(int i=1;i<=100;i++) ar[i]=ar[i-1]^i;
	here for every 4 numbers from 0 sequence is 
	0, 3, 7, 11, 15......are 0
	1, 5, 9, 13, 17......are 1
	2, 6, 10, 14, 18.....are +1 means 3,7,11,15,19..respectiely
	all 4 multiples ans same. 
	
	//for(int i=0;i<=30;i++) cout << i << " " << ar[i] << "\n";
	while(t--){
		cin >> l >> r;
		ans= takeMyval(l);
		//cout << ans << " ";
		for(lli i=l+1;i<=r;i++){
		//	cout << takeMyval(i) << " ";
			ans ^=takeMyval(i);
		}
		cout << ans << "\n";
	}
	return 0;
} */