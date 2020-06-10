#include<climits>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int heights[n], min_cost[n] = {0};
    for(int ind=0; ind<n; ind++)
        cin>>heights[ind];
    for(int ind=1; ind<n; ind++){
        int one_step = INT_MAX;
        int two_step = INT_MAX;
        if((ind-1)>=0) one_step = min_cost[ind-1] + abs(heights[ind]-heights[ind-1]);
        if((ind-2)>=0) two_step = min_cost[ind-2] + abs(heights[ind]-heights[ind-2]);
        min_cost[ind] = min(one_step, two_step);
    }
    cout << min_cost[n-1] << endl;
    return 0;
}