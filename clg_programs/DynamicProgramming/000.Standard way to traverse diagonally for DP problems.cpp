#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	vector<vector<int>> A(n,vector<int>(n,-1));
	for(int i=0;i<n;i++) A[i][i]=0;
	for(int size=2;size<=n;size++){
		for(int i=0;i<n-size+1;i++){
			int j=i+size-1;
			A[i][j]=size-1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}