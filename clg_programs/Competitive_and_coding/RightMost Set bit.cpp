#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(1){
		cin >>a>>b;
		if(!a and !b) break;
		int xr= a xor b;
		cout << xr<<"\n";
		cout << xr and (~(xr-1));
	}
	return 0;
}