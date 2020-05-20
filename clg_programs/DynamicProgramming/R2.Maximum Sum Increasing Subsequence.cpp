#include<bits/stdc++.h>
using namespace std;
int maxsum(vector<int> A){
    int n=A.size();
    vector<int> sum(n);
    for(int i=0;i<n;i++) sum[i]=A[i];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j] && sum[i]<sum[j]+A[i])
                sum[i]=sum[j]+A[i];
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
       // printf("%d ",sum[i]);
        ans=max(ans,sum[i]);
    }
    return ans;
}
int main(){
    int n; scanf("%d",&n);
    vector<int> A(n);
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    printf("\n%d\n",maxsum(A));
    return 0;
}
