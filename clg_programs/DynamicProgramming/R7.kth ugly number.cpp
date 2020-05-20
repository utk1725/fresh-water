#include<bits/stdc++.h>
using namespace std;
int kthugly(int n){
    vector<int> ugly(n);
    ugly[0]=1;
    int i=0,j=0,k=0, nxt_ugly=1;
    for(int ind=1;ind<n;ind++){
        nxt_ugly= min(ugly[i]*2,min(ugly[j]*3,ugly[k]*5));
        ugly[ind]=nxt_ugly;
        if(nxt_ugly==ugly[i]*2) i++;
        if(nxt_ugly==ugly[j]*3)	j++;
        if(nxt_ugly==ugly[k]*5)	k++;
    }
    return nxt_ugly;
}
int main(){
    //int k; scanf("%d",&k);
    //for(int i=1;i<15;i++)
    	printf("%d\n",kthugly(7));
    return 0;
}
