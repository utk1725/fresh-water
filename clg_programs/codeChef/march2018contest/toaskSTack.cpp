#include<bits/stdc++.h>
#include<limits>
using namespace std;
double lossFun(double price, double quant, double disc){
		double price_Inc_Dis= price + ((price*disc)/100.00);
		double sp= price_Inc_Dis - ((price_Inc_Dis*disc)/100.00);
		double  loss= price- sp;
		double ans= quant*loss;
		return ans;
}
int main(){
		int price, disc, quant; // take input 79,79,79 Answer should be 3895.0081
		scanf("%d %d %d",&price,&quant,&disc);
		double ans = lossFun((double)price, (double)quant, (double)disc);
		cout << setprecision(numeric_limits<double>::digits10+1) << ans << "\n";
		return 0;
}