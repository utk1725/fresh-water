//https://www.codechef.com/problems/VILTRIBE
#include<iostream>
using namespace std;
int main(){
	int present,n,c,a,b;
	int t; cin>>t;
	string s;
	while(t--){
		present=-1;
		a=b=0;
		cin >> s;
		n=s.length();
		for(int i=0;i<n;i++){
			if(s[i]=='A') {a++;present=0;}
			else if(s[i]=='B') {b++;present=1;}
			else{
				c=0;
				while(s[i]=='.' and i<n){i++;c++;}
				if(i<n){
					if(s[i]=='A' and present==0) a+=c;
					else if(s[i]=='B' and present==1) b+=c;
					i--;
				}
			}
		}
		cout << a << " " << b << "\n";
	}
	return 0;
}