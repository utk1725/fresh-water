#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main() {
	int t,n;scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		vector<ull> A(n);
		for(int i=0;i<n;i++) scanf("%llu",&A[i]);
 
		vector<ull> bef_Ar(n); bef_Ar[0]=A[0];
		for(int i=1;i<n;i++) bef_Ar[i]=bef_Ar[i-1]+A[i];
 
		vector<ull> aft_Ar(n); aft_Ar[n-1]=A[n-1];
		for(int i=n-2;i>=0;i--) aft_Ar[i]=aft_Ar[i+1]+A[i];
 
		
		for(int i=0;i<n;i++){
			int vote=0;
			ull jv=bef_Ar[i-1];
			ull pk=aft_Ar[i+1];
			for(int j=0;j<n;j++){
				if(i==j) continue;
				if(abs(i-j)==1) vote++;
				else{
					if(i>j){
						if(A[j]>=jv-bef_Ar[j]) vote++;
					}
					else{
						if(A[j]>=pk-aft_Ar[j]) vote++;
					}
				}
			}
			printf("%d ",vote);
		}
		printf("\n");
	}
	return 0;
} 
/*
Useful comments
//for(int i=0;i<n;i++) cout << bef_Ar[i] << " "; cout << "\n";
//for(int i=0;i<n;i++) cout << aft_Ar[i] << " "; cout << "\n";
//vector<int> ans(n);
cout << "i = " << i << "\n";
cout <<"\tat j = " << j << "\n"; 
cout <<"\tat j = " << j << "\n";
cout <<"\tat j = " << j << "\n";
*/
