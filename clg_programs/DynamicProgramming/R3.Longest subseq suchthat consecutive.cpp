#include<bits/stdc++.h>
using namespace std;
int LSC(vector<int> A){
    int ans=0,n=A.size();
    map<int,int> mp;
    for(int i=0;i<n;i++) mp[A[i]]=1;
    int prev=mp.begin()->first;
    for(auto it=mp.begin();it!=mp.end();it++){

    }
    return ans;
}
int main(){
    vector<int> A{10,4,3,11,13,5,6,12,7};
    printf("\n%d\n",LSC(A));
    return 0;
}
