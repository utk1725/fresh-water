//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;i++) cin >> ar[i];
	int low=ar[0], lowBreak=0, higiBreak=0, high=ar[0];
	for(int i=1;i<n;i++){
		if(ar[i] < low){
			low= ar[i]; lowBreak++;
		}
		if(ar[i] > high){
			high= ar[i]; higiBreak++;
		}
	}
	cout << higiBreak << " " << lowBreak << endl;
	return 0;
}