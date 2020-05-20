#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> result{0,0,0,5,5,5};
	cout << result.size()<<endl;
	result= vector<int> {find_if_not(begin(result), end(result), [](int a) {
		return !a;
	}), end(result)};
	cout<< result.size()<<endl;
	return 0;
}