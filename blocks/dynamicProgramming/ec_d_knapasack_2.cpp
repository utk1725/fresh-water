#include<iostream>
using namespace std;

#define int long long

struct thing{
    int weight;
    int value;
};
int32_t main(){
    int N,W;
    cin>>N>>W;
    thing items[N];
    for(int ind=0;ind<N;ind++)
        cin>>items[ind].weight>>items[ind].value;
    int max_val = 0;
    for(int ind=0;ind<N;ind++) max_val+=items[ind].value;
    int dp[N+1][max_val+1];
    for(int row=0;row<=N;row++) dp[row][0]=0;
    for(int col=0;col<=max_val;col++) dp[0][col]=0;
    for(int row=1;row<=N;row++){
        for(int col=1;col<=max_val;col++){
            dp[row][col] = dp[row-1][col];
            if()
        }
    }
    return 0;
}