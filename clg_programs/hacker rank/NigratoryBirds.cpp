//https://www.hackerrank.com/challenges/migratory-birds/problem
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ar[n], type[6]={0};
	for(int i=0; i< n; i++) cin >> ar[i];
	for(int i=0;i<n;i++) type[ar[i]]++;
	int lrg_typ= 1;
	for(int i=2;i<=5;i++) if(type[i] > type[lrg_typ]) lrg_typ = i;
	cout << lrg_typ;
	return 0;
}