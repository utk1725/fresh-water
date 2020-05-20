//https://www.hackerrank.com/challenges/strange-advertising/problem
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if (n==1) cout << "2";
	else{
		long long int prev=2, ans=2;
		for(int i=2;i<=n;i++){
			prev=((prev*3)/2);
			ans+=prev;
		} 
		cout << ans;
	}
	return 0;
}