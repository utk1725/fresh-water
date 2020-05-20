#include<bits/stdc++.h>
using namespace std;
int maxCoins(vector<int>& nums) {
        vector<int> A;
        A.push_back(1);
        copy(nums.begin(),nums.end(),back_inserter(A));
        A.push_back(1);
        int n=A.size();
        vector<vector<int>> DP(n,vector<int>(n,0));
        for(int size=3;size<=n;size++){
            for(int i=0;i<n-size+1;i++){
                int j=i+size-1;
                for(int k=i+1;k<=j-1;k++){
                    DP[i][j]=max(DP[i][j],A[i]*A[k]*A[j]+DP[i][k]+DP[k][j]);
                }
            }
        }
        return DP[0][n-1];
    }
int main(){
	vector<int> A={10,1,2,3,5};
	printf("%d ",maxCoins(A));
	return 0;
}