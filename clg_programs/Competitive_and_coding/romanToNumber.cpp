#include<iostream>
using namespace std;
int get(char ch){
	if(ch=='I') return 1;
	if(ch=='V') return 5;
	if(ch=='X') return 10;
	if(ch=='L') return 50;
	if(ch=='C') return 100;
	if(ch=='D') return 500;
	if(ch=='M') return 1000;
}
int romanToNumber(string A){
	int ans=0;
	for(int i=0;i<A.length();i++){
		if(i!=A.length()-1){
			if( get(A[i]) < get(A[i+1]) ){
				ans+=get(A[i+1])-get(A[i]); i++;
			}else ans+=get(A[i]);
		}else ans+=get(A[i]);
	}
	return ans;
}
int main(){
	string str;
	cout << "Enter a valid roman number\n";
	while(1){
		cin>>str;
		cout << romanToNumber(str)<<"\n";
	}
	return 0;
}