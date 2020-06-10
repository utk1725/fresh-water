#include<climits>
#include<iostream>
using namespace std;

#define loop(n) for(int ind=0;ind<n;ind++)
int main(){
    int n,k;
    cin>>n>>k;
    int heights[n], min_cost[n]={0};
    loop(n) cin>>heights[ind];
    for(int ind=1; ind<n; ind++){
        int min_for_ind = INT_MAX;
        for(int step=1;step<=k;step++){
            if(ind-step >= 0){
                int cost_with_step = min_cost[ind-step] + abs(heights[ind]-heights[ind-step]);
                min_for_ind = min(min_for_ind, cost_with_step);
            }
        }
        min_cost[ind] = min_for_ind;
    }
    cout<<min_cost[n-1]<<endl;
    return 0;
}