#include<iostream>

using namespace std;

int wines_top_down(int start, int end, int wines[], int year, int dp[100][100]){
    if(start>end) return 0;
    if(dp[start][end]) return dp[start][end];
    int profit1 = (wines[start]*year)+wines_top_down(start+1, end, wines, year+1, dp);
    int profit2 = (wines[end]*year)+wines_top_down(start, end-1, wines, year+1, dp);
    return dp[start][end] = max(profit1, profit2);
}
int wines_bottom_up(int wines[]){

}
int main(){
    int wines[] = {2,3,5,1,4};
    int dp[100][100] = {0};
    int bottle_count = sizeof(wines)/sizeof(int);
    cout<<wines_top_down(0,bottle_count-1,wines,1,dp);
    return 0;
}