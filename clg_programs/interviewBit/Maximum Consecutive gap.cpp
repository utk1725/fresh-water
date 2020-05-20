//https://www.interviewbit.com/problems/maximum-consecutive-gap/
int Solution::maximumGap(const vector<int> &A) {
    int n= A.size(), minI=INT_MAX, maxI=INT_MIN;
    if(n<2) return 0;
    for(int i=0;i<n;i++){
        minI= min(minI, A[i]); maxI= max(maxI, A[i]);
    }
    if(n==2) return maxI-minI;
    float gap= (float)(maxI-minI) / (float)(n-1);
    vector<int> mxBkt(n-1, INT_MIN);    vector<int> mnBkt(n-1,INT_MAX);
    for(int i=0;i<n;i++){
        if(A[i]==minI or A[i]==maxI) continue;
        int bktnum=(int) floor((A[i]-minI)/gap);
        mxBkt[bktnum]= max(A[i],mxBkt[bktnum]);
        mnBkt[bktnum]= min(A[i],mnBkt[bktnum]);
    }
    int ans=0, prev=minI;
    for(int i=0;i<n-1;i++){
        if(mnBkt[i]==INT_MAX) continue;
        ans= max(ans, mnBkt[i]-prev);
        prev= mxBkt[i];
    }
    ans= max(ans, maxI-prev);
    return ans;
}
