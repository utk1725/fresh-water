//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
#include<iostream>
using namespace std;
bool isLeap(int y){
	return ( (y%4==0 && y%100 !=0) || y%400 == 0 );
} 
int main(){
	int y;
	cin >> y;
	bool a= isLeap(y);
    if (y == 1918) cout << "26.09.1918";
    else if (y<=1917){
        if(y%4==0) cout << "12.09."<<y;
        else cout << "13.09."<<y;
    }
    else{
        if(a) cout << "12.09."<<y;
	    else cout << "13.09."<<y;    
    }
	
	return 0;
}