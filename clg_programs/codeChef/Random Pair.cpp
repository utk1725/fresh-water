//https://www.codechef.com/problems/RNDPAIR
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	int t,mx; cin >>t;
	float ans,c,N;
	while(t--){
		c=0;
		mx=INT_MIN;
		cin >> N;
		int ar[(int)N];
		for(int i=0;i<N;i++) cin >> ar[i];
		for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			int tmpSm= ar[i]+ar[j];
			if(mx < tmpSm){
				c=1;
				mx=tmpSm;
			}else if(mx==tmpSm) c++;
		   }
		}
		ans= c/(N*(N-1)/2);
		cout << ans << "\n";
	}
	return 0;
}