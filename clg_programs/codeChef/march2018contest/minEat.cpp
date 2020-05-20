//https://www.codechef.com/MARCH18B/problems/MINEAT
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main() {
	int t; scanf("%d",&t);
	int n;
	ull h,ans,extra;
	while(t--){
		scanf("%d %llu",&n,&h);
		vector<ull> vec;
		for(int i=0;i<n;i++) {scanf("%llu",&ans); vec.push_back(ans);}
		
		ans=*max_element(vec.begin(),vec.end()); 
		extra=h-n;
		while(extra>0){
			ull k1= ans/2;
			ull k2= ans-k1;
			vector<ull>::iterator pos= find(vec.begin(),vec.end(),ans);
			vec.erase(pos);
			vec.push_back(k1); vec.push_back(k2);
			ans=*max_element(vec.begin(),vec.end());
			extra--;
		}
			printf("%llu\n",ans);
	}
	return 0;
} 