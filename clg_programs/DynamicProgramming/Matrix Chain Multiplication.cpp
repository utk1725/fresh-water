#include<iostream>
#include<limits.h>
using namespace std;
int MCM(int *p,int n){
	int m[n][n];
	int i,j,k,l,q;
	for(i=1;i<n;i++) m[i][i]=0;
	for(l=2;l<n;l++){
		for(i=1;i<n-l+1;i++){
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(k=i;k<=j;k++){
				q= m[i][k]+ m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j]) m[i][j]=q;
			}
		}
	}
	return m[1][n-1];
}
/*
If you have seen example program above given,
it's like a table we need to fill that one for example table(2,4) indicates
that number of multiplications needed to multiply from matrix 2 to 4
So our answer will be in table(1,4). Number of multiplications needed to multiply
matrices from 1 to 4(given n)

Now let see code, m[i][i]=0 means, only one matrix.

L=2 to n means, consider 2,3,4 matrices each time find answer.(In table this is row wise)
for each row there may be combinations.That means suppose you are taking 2 matries (in first loop)
now in among 4, you can find (1,2) , (2,3), (3,4) combinations.
These are i and j values. inside that loop.
i = 1 to n-l+1, and each time j=i+l-1;

inside most inner loop, q=m[i][k]+ m[k+1][j]+p[i-1]*p[k]*p[j]; means at split
counting number of multiplications. This clearly explained above.

Finally INT_MAX is that, before you calculating number of multiplications
for a paritcular cell Fill it with a possible maximum value. So that
in next by comparing we can replace it. Each time lesser number update.

For this in program "LIMITS.H" header file included.

My better suggestion is, for given example trace the code on paper patiently.
Definately you will get it.
*/
int main(){
	int n;
	cout << "Enter number of matrices " << endl;
	cin >> n;
	n++;
	int ar[n];
	cout << "Enter dimensions " << endl;
	for(int i=0;i<n;i++) cin >> ar[i];
	cout << "Minimum number of multiplications needed are " << MCM(ar,n) << endl;
return 0;
}