//https://www.codechef.com/problems/GIT01
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t,r1,r2,g1,g2;
	cin >>t;
	while(t--){
		r1=r2=g1=g2=0;
		cin >>n>>m;
		char ar[n][m];
		for(int i=0;i<n;i++) cin >> ar[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((i+j)%2){
					if(ar[i][j]!='R') r1++;
				}
				else{
					if(ar[i][j]!='G') g1++;
				}
			}
		}
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if((i+j)%2){
						if(ar[i][j]!='G') g2++;
					}
					else{
						if(ar[i][j]!='R') r2++;
					}
				}
			}
		cout << min((r1*3+g1*5) , (r2*3+g2*5)) << "\n"; 
	}
	return 0;
}