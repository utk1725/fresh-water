//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include<iostream>
using namespace std;
int main(){
	int s,t,a,b,m,n;
	cin >> s >> t >> a >> b >> m >> n;
	
	int a_c=0, o_c=0;
	int dist,pos;
	for(int i=0;i<m;i++){
		cin >> dist;
		pos= a+dist;
		if(pos>=s && pos<=t) a_c++;
	}
	for(int i=0;i<n;i++){
		cin >> dist;
		pos= b+dist;
		if(pos>=s && pos<=t) o_c++;
	}
	cout << a_c << endl << o_c;
	return 0;
}