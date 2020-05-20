#include<bits/stdc++.h>
#include<string>
using namespace std;
int myCompare(int a, int b)
{
	string X= to_string(a);
	string Y= to_string(b);
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}
string largestNumber(const vector<int> &A) {
    vector<int> B;
    B.assign(A.begin(),A.end());
    sort(B.begin(), B.end(), myCompare);
	string ans;
	for(int i=0;i<B.size();i++) ans.append(to_string(B[i]));
	int upto=0;
	for(int i=0;i<ans.length()-1;i++){
	    if(ans[i]=='0') upto++;
	    else break;
	}
	ans.erase(0,upto);
	return ans;
	return ans;
}

int main(){
	
	int ar[5]={9,5,3,34,30};
	vector<int> vec;
	vec.assign(ar,ar+5);
	string ans= largestNumber(vec);
	cout << ans<<"\n";
	return 0;
}