#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int firstMissingPositive(vector<int> v){
	int index=0;
	//for(int i=0;i<v.size();i++) cout << v[i] << " "; cout<<"\n";
	for(int i=0;i<v.size();i++) if(v[i]>0) v[index++]=v[i];
	//for(int i=0;i<v.size();i++) cout << v[i] << " "; cout<<"\n";
	//cout << index << "\n";
	for(int i=0;i<index;i++){
		int tmp=abs(v[i]);
		if(tmp>0 and tmp<=index){
		v[tmp-1]= -v[tmp-1];
		}
	}
	//cout << "\nTerminate\n";
	//for(int i=0;i<v.size();i++) cout << v[i] << " "; cout<<"\n";
	for(int i=0;i<index;i++) if(v[i]>=0) return i+1;
	return index+1;
}
int main(){
	vector <int> vec;
	int ar[6]= {-3,-2,0,3,2,4};
	vec.assign(ar+0,ar+6);
	int missing= firstMissingPositive(vec);
	cout << "\n" << missing<< "\n";
	return 0;
}