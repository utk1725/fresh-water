#include <bits/stdc++.h>
using namespace std;
void AddEdge(vector <int> vec[],int a, int b){
	vec[a].push_back(b);
	vec[b].push_back(a);
}
void dfs(vector <int> vec[], bool seen[],int vrtx){
	vector <int> :: iterator it;
	if(seen[vrtx]) return;
	seen[vrtx]=true;
	cout << "Node " << vrtx << " ";
	for(it=vec[vrtx].begin(); it!=vec[vrtx].end();it++) dfs(vec,seen,*it);
}
int main(){
	cout << "Enter number of vertices\n";
	int v; cin>>v;
	vector <int> vec[v];
	vector <int> :: iterator it;
	cout << "Enter number of edges\n";
	int e; cin>>e;
	for(int i=0;i<e;i++){
		// stroing in adjecency list representation
		cout << "Enter two ends of edge\n";
		int a,b; cin>>a>>b;
		AddEdge(vec,a,b);
	}
	cout << "Adjecency list representation of given graph is \n";
	for(int i=0;i<v;i++){
		for(it= vec[i].begin();it!=vec[i].end();it++) cout << *it << " -> "; cout <<"\n";
	}
	cout <<"\nDFS\n";
	bool seen[v];
	for(int i=0;i<v;i++) seen[i]=false;
	dfs(vec,seen,0);
	return 0;
}