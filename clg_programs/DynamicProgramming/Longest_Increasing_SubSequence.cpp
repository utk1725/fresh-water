#include<bits/stdc++.h>
using namespace std;
int longestNonDecSS(vector<int> A){
	int n=A.size();
	vector<int> mx_len(n,1);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(A[i]>=A[j]){
					mx_len[i]=max(mx_len[i],mx_len[j]+1);
			}
		}
	}
	return *max_element(mx_len.begin(),mx_len.end());
}
int main(){
	return 0;
	vector<int> ar={0,8,4,12,2,10,6,14,1,9};
	cout << longestNonDecSS(ar);
	return 0;
}