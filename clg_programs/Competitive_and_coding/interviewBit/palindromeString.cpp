#include<iostream>
using namespace std;
int Solution(string A) {
    int ar[A.length()];
    int index=0;
    for(int i=0;i<A.length();i++){
        int tmp= A[i]+0;
        if((tmp>=49 and tmp<=57) or (tmp>=65 and tmp<=90) or (tmp>=97 and tmp<=122)){
			if (tmp>=97) ar[index++]=tmp-32;
			else ar[index++]=tmp;
		}
    }
	cout << index;
    int right= index--;
    right= index--;
    //for(int i=0;i<right;i++) cout << ar[i] << " ";
	int left=0;
    while(left<=right){
        if(ar[left] != ar[right]) {cout << left << " " << right;return 0;}
        left++; right--;
    }
    return 1;
}
int main(){
	int a='1'+0;
	int aa='9'+0;
	cout << a <<" " <<aa;
	cout << Solution("1a2");
	return 0;
}