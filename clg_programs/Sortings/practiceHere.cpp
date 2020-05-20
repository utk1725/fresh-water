#include<iostream>
using namespace std;
int parti(int *ar,int low,int high){
	int x,i,j;
	i=low-1;
	x=ar[high];
	for(j=low;j<high;j++){
		if(ar[j]<= x){
			i++;
			if(i!=j){
				int tmp= ar[i];
				ar[i]= ar[j];
				ar[j]= tmp;
			}
		}
	}
	i++;
	int tmp= ar[high];
	ar[high]= ar[i];
	ar[i]= tmp;
	return i;
}

void qwkSrt(int *ar,int low, int high){
	if(low<high){
		int q= parti(ar,low,high);
		qwkSrt(ar,low,q-1);
		qwkSrt(ar,q+1,high);
	}
}

int main(){
	int n;
	cin >> n;
	int ar[n];
	for (int i=0;i<n;i++) cin>> ar[i];
	
	qwkSrt(ar,0,n-1);
	for (int i=0;i<n;i++) cout<< ar[i];
	return 0;
}