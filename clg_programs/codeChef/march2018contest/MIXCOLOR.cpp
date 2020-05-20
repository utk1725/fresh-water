//https://www.codechef.com/MARCH18B/problems/MIXCOLOR
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; scanf("%d",&t);
	int n;
	while(t--){
		scanf("%d",&n);
		unsigned long long ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		set<unsigned long long> s(ar,ar+n);
		printf("%d\n",n-s.size());
	}
	return 0;
}