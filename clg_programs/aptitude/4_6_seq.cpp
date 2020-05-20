#include<bits/stdc++.h>
using namespace std;
void printSeq(int n){
	queue<string> q;
	q.push("4"); q.push("6");
	for(int i=0;i<n;i++){
		string tmp= q.front(); q.pop();
		cout << tmp << " ";
		string tmp2=tmp;
		q.push(tmp.append("4"));
		q.push(tmp2.append("6"));
	}
	while(!q.empty()) q.pop(); //this is to save memory. deleting queue
}
int main(){
	int n; cin>> n;
	printSeq(n);
	return 0;
}
/* #include<iostream>
using namespace std;
void printSeq(int n){
	if(n==1) {cout << "4"; return;}
	if(n==2) {cout << "4 6"; return;}
	int ar[n];
	ar[0]=4; ar[1]=6;
	int flg=0;
	int present_work= ar[flg];
	for(int i=2;i<n;){
		ar[i]= present_work*10+4;
		i++;
		ar[i]=present_work*10+6;
		i++;
		flg++;
		present_work=ar[flg];
	}
	for(int i=0;i<n;i++) cout << ar[i] << " ";
}
int main(){
	int n; cin>>n;
	printSeq(n);
} */