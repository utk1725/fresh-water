//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include<iostream>
#include<math.h>
using namespace std;
// 123
// 0 *10 + 3 = 3
// 3 *10  + 2 =  32
// 32*10 + 1 = 321
long long int reverse(long long int num){
	long long int ans=0;
	while(num){
		ans= ans*10 + (num%10);
		num/=10;
	}
	return ans;
}
int main(){
	long long int a,b,k;
	cin >> a >> b >> k;
	long long int ans=0,rev;
	for(long long int i=a; i<=b; i++){
		rev= reverse(i);
 		rev= abs (i-rev);
		if(rev%k==0) ans++;
	}
	cout << ans;
	return 0;
}