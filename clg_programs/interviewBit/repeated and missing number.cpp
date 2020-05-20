/*
Q: Repeat and missing number in array (Amazon)
*/
#include<bits/stdc++.h>
using namespace std;
void findMissingAndRepeated(vector<int> v){
	int a,b;
	long long int actlAdd=0, _1tonAdd=0;
	long long int actlSqr=0, _1tonSqr=0;
	//long long int actlMul=1, _1tonMul=1;
	for(int i=0;i<v.size();i++){
		actlAdd+=v[i];
		//actlMul*=v[i];
		actlSqr+=(v[i]*v[i]);
	}
	int n=v.size();
	_1tonAdd= n*(n+1)/2;
	_1tonSqr= n*(n+1)*(2*n+1)/6;
	//for(int i=1;i<=n;i++) _1tonMul*=i;
	
	int aMinusb= actlAdd - _1tonAdd;
	int aSqr_bSqr= actlSqr - _1tonSqr;
	//int aIntob= actlMul - _1tonMul;
	int aPlusb= aSqr_bSqr/aMinusb;
	a= (aMinusb + aPlusb) /2 ;
	b= a-aMinusb;
	cout << a << " " << b;
}
int main(){
	int ar[8]={6,2,3,4,5,6,7,8};
	vector<int> v;
	v.assign(ar,ar+5);
	findMissingAndRepeated(v);
	return 0;
}
/*
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int n=A.size();
    long long int sum=0;
    long long int diff;
    long long int square=0;
    long long int a;
    for(long long int i=0;i<A.size();i++){
        sum+=(long long)A[i];
        square+= (long long)A[i]*(long long)A[i];
        
    }
        
    diff= n*(n+1)/2- sum;
    a= n*(n+1)*(2*n+1)/6 -square;
    long long int b;
    b=a/diff;
    
    vector<int>B;
    B.push_back((b-diff)/2);
    B.push_back((b+diff)/2);
    return B;
}


*/