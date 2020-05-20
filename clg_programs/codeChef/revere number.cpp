//https://www.codechef.com/problems/FLOW007
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t; cin >>t;
	while(t--){
		cin >> n;
		cout <<floor(sqrt(n))<<"\n";
		// this is for reverse number
		/* int ans=0;
		cin >> n;
		while(n){
			ans=ans*10+(n%10);
			n/=10;
		}
		cout << ans << "\n"; */
	}
	return 0;
}
/*

#include <iostream>
using namespace std;
int hashing(int arr[],int n)
{
	int max=0;
	for(int i=0; i<n; i++)
	{
		if(max< arr[i])
		{
		max=arr[i];
		}
	}
	int hashtable[max];
	int repeated=-1;
	for (int i=0;i<n;i++)
	{
		int ind=arr[i]%(max);
		if(hashtable[ind]!=0)
		{
			repeated= hashtable[ind];
			break;
		}
		else
		{
			hashtable[ind]=arr[i];
		}
	}
	return repeated;
}
int main()
{
	int a[5]={};
	int n,i=0;
	cout << "enter size of array";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
    	cin >> a[i];
	}
	
	int re= hashing(a,n);
	cout << re;
	return 0;
}
*/