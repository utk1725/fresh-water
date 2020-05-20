#include <bits/stdc++.h>
#include <iomanip>
//#include<time.h>
// clock_t begin= clock();
using namespace std;
double lossFun(double price, double quant, double disc) {
  double price_Inc_Dis = price + ((price * disc) / 100.00);
  double sp = price_Inc_Dis - ((price_Inc_Dis * disc) / 100.00);
  double loss = price - sp;
  return (quant * loss);
}
int main() {
  int t;
  scanf("%d", &t);
  long long int n;
  int price, disc, quant;
  while (t--) {
	scanf("%d", &n);
	double ans = 0;
	for (long long int i = 0; i < n; i++) {
	  scanf("%d %d %d", &price, &quant, &disc);
	  if(disc == 0) continue;
	  ans += lossFun((double)price, (double)quant, (double)disc);
	}
	printf("%.9lf\n", ans);
	//cout << setprecision(10) << ans << "\n";
  }
  return 0;
}