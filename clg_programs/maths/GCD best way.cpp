#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
	if(!b) return a;
	return GCD(b,a%b);
}
int LCM(int a, int b){
	return a*b/GCD(a,b);
}
int main(){
	int a,b;
	if(scanf("%d %d",&a,&b)==2);
	cout << GCD(a,b);
	return 0;
}