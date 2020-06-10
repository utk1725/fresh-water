#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even = 0, odd = 0;
        while(n--){
            int num; cin>>num;
            if(num%2) odd++;
            else even++;
        }
        if(even && odd) cout<<"NO\n";
        else cout << "YES\n";

     }
    return 0;
}
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int find_gcd(int num1, int num2){
//    if(num2>num1) swap(num1, num2);
//    return num2==0?num1:find_gcd(num2, num1%num2);
//}
//int findLcm(int a, int b){
//    return (a*b)/find_gcd(a,b);
//}
//int findLcmOfArray(vector<int> vec, int size){
//    int lcm = 1;
//    for(int ind=0; ind<size; ind++)
//        lcm = findLcm(lcm, vec[ind]);
//    return lcm;
//}
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<int> tetris(n);
//        for(int ind=0; ind<n; ind++) cin>>tetris[ind];
//        int lcm = findLcmOfArray(tetris, n);
//        bool possible = true;
//        for(int ind=0; ind<n; ind++){
//            if((lcm-tetris[ind])%2)
//                possible = false;
//        }
//        if(possible) cout << "YES\n";
//        else cout << "NO\n";
//    }
//    return 0;
//}