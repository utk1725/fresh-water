#include<iostream>
using namespace std;

#define int long long

int32_t main(){
    int N;
    cin >> N;
    int happy[N][3];
    for(int row=0; row<N; row++)
        for(int col=0; col<3; col++)
            cin>>happy[row][col];
    int max_points[N][3];
    for(int activity=0; activity<3; activity++) max_points[0][activity] = happy[0][activity];
    for(int row=1; row<N; row++){
        for(int col=0; col<3; col++){
            int max_happy = -1;
            for(int prev_day=0; prev_day<3; prev_day++){
                if(col != prev_day){
                    max_happy = max(max_happy, happy[row][col]+max_points[row-1][prev_day]);
                }
            }
            max_points[row][col] = max_happy;
        }
    }
    int ans = max(max_points[N-1][0], max(max_points[N-1][1], max_points[N-1][2]));
    cout << ans << endl;
    return 0;
}