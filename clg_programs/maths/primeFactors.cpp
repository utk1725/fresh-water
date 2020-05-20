#include<bits/stdc++.h>
using namespace std;
vector<int> primeFacts(int n){
	vector<int> ans;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			ans.push_back(i);
			n/=i;
		}
	}
	if(n>1) ans.push_back(n);
	return ans;
}
int nooffacts(int n){
	int ans=1;
	for(int i=2;i<=sqrt(n);i++){
		int new_count=0;
		while(n%i==0){
			new_count++;
			n/=i;
		}
		ans*=(new_count+1);
	}
	if(n>1) ans*=2;
	return ans;
}
int EulerToitent(int n){
	int ans=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) ans-=(ans/i);
		while(n%i==0) n/=i;
	}
	if(n>1) ans-=(ans/n);
	return ans;
}
int BforceNofFacts(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		if(n%i==0) ans++;
	}
	return ans;
}
int main(){
	int n; if(scanf("%d",&n)==1);
	cout << EulerToitent(n) << endl;
	vector<int> Pfacts= primeFacts(n);
	for(int i=0;i<Pfacts.size();i++) cout << Pfacts[i] << " ";
	cout << endl << nooffacts(n) << endl;
	cout << BforceNofFacts(n) << endl;
	return 0;
}