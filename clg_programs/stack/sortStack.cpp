#include<bits/stdc++.h>
using namespace std;
void printStack(stack<int> s1){
	while(!s1.empty()){
		cout << s1.top() <<" ";
		s1.pop();
	}
	cout <<"\n";
}
stack<int> sortStack(stack<int> s1){
	stack<int> s2;
	while(!s1.empty()){
		int tmp= s1.top(); s1.pop();
		while(!s2.empty() and s2.top()<tmp){
			int tmp1= s2.top(); s1.push(tmp1); s2.pop();
		}
		s2.push(tmp);
	}
	return s2;
}
int main(){
	stack<int> s1;
	int ele=1;
	while(ele){
		cin >> ele;
		s1.push(ele);
	}
	printStack(s1);
	s1= sortStack(s1);
	printStack(s1);
	return 0;
}