#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> sideStreet;
	stack<int> otherSide;
	
	sideStreet.push(-1);
	int nextCar ,noOfcars, carIndex;
	int n;
	while(1){
		cin>> n;
		if(!n) break;
		
		int ar[n];
		for(int i=0;i<n;i++) cin>> ar[i];
		
		noOfcars= n;
		carIndex=0;
		nextCar=1;
		
		while(noOfcars){
			if(ar[carIndex]== nextCar) {
				carIndex++; noOfcars--;
			}
		}
	}
	return 0;
}