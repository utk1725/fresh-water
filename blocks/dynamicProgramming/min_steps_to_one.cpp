#include<iostream>
#include<climits>
using namespace std;

int min(int a, int b){
    return a<b?a:b;
}
void prepare_dp_array_for_bottom_up(int *ary){
    for(int ind=2;ind<100000;ind++){
        int x= ary[ind-1];
        int y= ind%2 ? INT_MAX : ary[ind/2];
        int z= ind%3 ? INT_MAX : ary[ind/3];
        ary[ind] = 1+min(x,min(y,z));
    }
}
int minStepsTopDown(int num, int dp[]){
    if(num==1) return 0;
    if(dp[num] != 0) return dp[num];
    int x,y,z;
    x=y=z= INT_MAX;
    if(num%3==0) z = minStepsTopDown(num/3, dp);
    if(num%2==0) y = minStepsTopDown(num/2, dp);
    x = minStepsTopDown(num-1, dp);
    return dp[num] = 1 + min(x,min(y,z));

}
int main(){
    int ary[100000] = {0};
    prepare_dp_array_for_bottom_up(ary);
    int num;
    cin >> num;
    cout << ary[num] << endl;

    int dp[100000] = {0};
    cout << minStepsTopDown(num, dp) << endl;
    return 0;
}