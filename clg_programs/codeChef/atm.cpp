//https://www.codechef.com/problems/HS08TEST
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float wm; cin >>wm;
	float bal; cin >> bal;
	if((int)wm%5!=0 or (wm+0.50)>bal) cout << bal;
	else cout << std::fixed<<std::setprecision(2) <<  bal-(float)(wm+0.50);
	return 0;
}