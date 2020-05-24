#include<iostream>
#include<climits>
using namespace std;

int min_coin_change_top_down(int amount, int coins[], int coin_count, int dp[]){
    if(amount==0) return 0;
    if(dp[amount]) return dp[amount];
    int ans = INT_MAX;
    for(int coin=0;coin<coin_count;coin++){
        if(amount-coins[coin]>=0){
            int curr_solution = min_coin_change_top_down(amount-coins[coin], coins, coin_count, dp);
            ans = min(ans, curr_solution+1);
        }
    }
    return dp[amount] = ans;
}
int min_coin_change_bottom_up(int amount, int coins[], int coin_count){
    int dp[amount+1] = {0};
    for(int val=1; val<=amount; val++){
        dp[val] = INT_MAX;
        for(int coin=0; coin<coin_count; coin++){
            if(val-coins[coin]>=0){
                int sub_prob_sol = dp[val-coins[coin]];
                dp[val] = min(dp[val], 1+sub_prob_sol);
            }
        }
    }
    return dp[amount];
}
int main(){
    int amount = 15;
    int coins[] = {1,7,10};
    int coin_count = sizeof(coins)/sizeof(int);
    int dp_ary[100000] = {0};
    cout << min_coin_change_top_down(amount, coins, coin_count, dp_ary) << endl;

    cout << min_coin_change_bottom_up(amount, coins, coin_count) << endl;
    return 0;
}
