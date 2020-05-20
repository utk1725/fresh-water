#include<stdio.h>
#include<string.h>
int main(){
	int I,t,del,n;
	scanf("%d",&t);
	while(t--){
	char ar[100000];
	scanf("%s",ar);
	n=strlen(ar);
	del=0;
	for(I=0;I<n-1;I++){
		if(ar[I]==ar[I+1]) del++;
		}printf("%d\n",del);
	} 
	return 0;
}
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        int ans = 0;
        for(int i = 0 ; i< str.length() - 1; i++)
        {
            if(str[i] == str[i+1]) // If two consecutive characters are the same, delete one of them.
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
