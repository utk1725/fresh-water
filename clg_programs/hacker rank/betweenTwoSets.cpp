//https://www.hackerrank.com/challenges/between-two-sets/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    if(!a or !b) return 0;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main() {
    int n,m,ele;
    cin>>n>>m;
    vector<int> a,b;
    for(int i=0;i<n;i++) {cin>>ele;a.push_back(ele);}
    for(int i=0;i<m;i++) {cin>>ele;b.push_back(ele);}
    int ans=0,lc=a[0],gc=b[0];
    for(int i=1;i<n;i++) lc=lcm(lc,a[i]);
    for(int i=1;i<m;i++) gc=gcd(gc,b[i]);
	cout << lc << " " << gc<< endl;
    if(gc%lc==0){
        ans=gc/lc;ans--;
    }
    cout << ans;
    return 0;
}
