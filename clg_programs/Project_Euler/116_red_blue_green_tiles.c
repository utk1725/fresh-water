#include<stdio.h>
long long int function(long long int parts,int color){
	long long int ans=0,combi,blacks_avail=parts;
	while(parts>color){
		combi = (parts-color)+1;
		ans = ans+combi;
		blacks_avail = blacks_avail-color;
		if(blacks_avail<=color) break;
		parts= combi;
	}
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long int parts;
	scanf("%lld",&parts);
	long long int r = function(parts,2);
	long long int b = function(parts,3);
	long long int g = function(parts,4);
	printf("%lld",r+b+g);
	}
	return 0;
}
