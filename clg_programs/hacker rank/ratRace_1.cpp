#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int q,x,y,z;
	cin >> q;
	while(q--){
		cin >> x; cin >> y; cin >>z;
		x= abs(z-x); y= abs(z-y);
		if(x==y) cout << "Mouse C" << endl;
		else x<y ? cout << "Cat A" << endl : cout << "Cat B" << endl;
	}
    return 0;
}