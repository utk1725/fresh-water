//https://www.hackerrank.com/challenges/mars-exploration/problem
#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n= s.length(), altr=0;
	for(int i=0;i<n;i++){
		if((i%3==0 || i%3==2)&& s[i]!='S')  altr++;
		if(i%3==1 && s[i]!='O')  altr++;
	}
	cout << altr;
	return 0;
}