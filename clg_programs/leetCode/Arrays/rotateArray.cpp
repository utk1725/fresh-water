#include<bits/stdc++.h>
using namespace std;
int main(){
	int N=7,k=3;
	vector<int> ar;
	for(int i=1;1<=N;i++) ar.push_back(i);
	
    int present_ind=0,present_val=ar[0];
    int future_ind, future_val, tmp;
	
    for(int i=0;i<N;i++){
		
		future_ind= (k+present_ind)%N;
		future_val= ar[future_ind];
		
		ar[future_ind]=present_val;
		
		present_ind=future_ind;
		
		break;
	}
	cout << present_ind << " " << present_val << " " << future_ind << " " << future_val << endl;
	for(int i=0;i<N;i++) printf("%d ",ar[i]);
	return 0;
}