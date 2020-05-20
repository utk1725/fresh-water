//https://www.hackerrank.com/challenges/torque-and-development/problem
#include<iostream>
using namespace std;
int main(){
	int q;
	cin  >> q;
	while(q--){
		long long int n,m,clib,croad,cntd=0;
		cin >> n >> m >> clib >> croad;
		int ar[n][n], adj[n];
		int i,j;
		for(int i=1;i<=m;i++) {
			cin >> i >> j;
			ar[i][j]=ar[j][i]=1;
		}
		if (clib < croad) cout << n*clib ;
		else{
			for(int x=0;x<n;x++) adj[i]=-1;
			adj[0]=1;
			for(int a=1;a<n;a++) if(ar[0][a]==1) adj[a]=1;
			cntd+=1;
			for(a=1;a<n;a++){
				if(adj[a]==-1){
					cntd++;
					adj[a]=a;
					for(int b=1;b<n;b++) if(ar[a][b]==1) adj[b]=1;
				}
			}
		}
	}
	return 0;
}