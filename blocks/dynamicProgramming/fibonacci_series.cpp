#include<iostream>
#include<vector>

using namespace std;

void print_vector(vector<int> vec){
    for(int ind=0; ind<vec.size();ind++) cout <<vec[ind]<<" ";
    cout << endl;
}
int fib(int num){
    if(num==0 || num==1) return num;
    return fib(num-1)+fib(num-2);
}
int top_down_fib(int n, vector<int> &ary){
    if(n==0 || n==1) return ary[n]=n;
    if(ary[n] != -1) return ary[n];
    return ary[n] = top_down_fib(n-1, ary)+top_down_fib(n-2, ary);
}
int bottom_up_fib(int n){
    vector<int> dp_vect(n+1,0);
    dp_vect[1] = 1;
    for(int ind=2; ind<=n; ind++) dp_vect[ind] = dp_vect[ind-1]+dp_vect[ind-2];
    return dp_vect[n];
}
int space_optimized_fib(int num){
    if(num==0 || num==1) return num;
    int prev=1, prev_prev=0, ele_fib;
    for(int ele=2; ele<=num; ele++){
        ele_fib = prev + prev_prev;
        prev_prev = prev;
        prev= ele_fib;
    }
    return ele_fib;
}
int main(){
    int num;
    cin >> num;
    cout << fib(num) << endl;

    vector<int> ary(num+1, -1);
    cout << top_down_fib(num, ary) << endl;

    cout << bottom_up_fib(num) << endl;

    cout << space_optimized_fib(num) << endl;
    return 0;
}
