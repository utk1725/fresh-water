#include<iostream>
using namespace std;
typedef long long int lli;
int NoOfSetBits(lli n){
	int count=0;
	while(n){
		count++; n&= n-1;
	}
	return count;
}
int main(){
	int t; cin >> t;
	lli n;
	while(t--){
		cin >> n;
		if(NoOfSetBits(n-1) & 1) cout << "Louise\n";
		else cout << "Richard\n";
	}
	return 0;
}
/* //https://www.hackerrank.com/challenges/counter-game/problem
#include<iostream>
using namespace std;
typedef long long int lli;
int getNearAqr(int n){
	n|= n>>1;
	n|= n>>2;
	n|= n>>4;
	n|= n>>8;
	n|= n>>16;
	n+=1;
	return n>>1;
}
int main(){
	int turn,t; lli n; cin >> t;
	while(t--){
		//cin >> n;
		n=t;
		turn=0;
		while(n!=1){
			if(!(n & (n-1))) n/=2;
			else{
				lli nsQ= getNearAqr(n);
				n= n-nsQ;
			}
			turn=1-turn;
		}
		cout << t << " " ;
		if(turn) cout << "Louise\n";
		else cout << "Richard\n";
	}
	return 0;
} */