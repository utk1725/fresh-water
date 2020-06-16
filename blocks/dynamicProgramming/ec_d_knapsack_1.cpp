#include<iostream>
using namespace std;

#define int long long

int32_t main(){
    int N,W;
    cin>>N>>W;
    int weights[N], values[N];
    for(int ind=0; ind<N; ind++){
        cin>> weights[ind];
        cin>> values[ind];
    }
    int dp[N+1][W+1];
    for(int items=0; items<=N; items++){
        for(int weight=0; weight<=W; weight++){
            if(items==0 || weight==0) dp[items][weight]=0;
            else if(weight-weights[items-1] >=0)
                dp[items][weight]=max(dp[items-1][weight], values[items-1]+dp[items-1][weight-weights[items-1]]);
            else dp[items][weight] = dp[items-1][weight];
        }
    }
    cout << dp[N][W]<<endl;
    return 0;
}