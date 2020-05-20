//BFS
#include<bits/stdc++.h>
using namespace std;
void AddEdge(vector<int> vec[], int a, int b){
	vec[a].push_back(b);
	vec[b].push_back(a);
}
void bfs(vector<int> vec[],int v){
	vector <int> :: iterator it;
	bool seen[v]; for(int i=0;i<v;i++) seen[i]=false;
	seen[0]=true;
	queue<int> q;
	q.push(0);
	while(!q.empty()){
		int a=q.front(); q.pop();
		cout << "Node " << a << "  ";
		for(it=vec[a].begin(); it!=vec[a].end();it++){
			if(seen[*it]) continue;
			seen[*it]= true;
			q.push(*it);
		}
	}
}
int main(){
	cout << "Enter number of vertices\n";
	int v; cin >> v;
	vector <int> vec[v];
	vector <int> :: iterator it;
	cout << "Enter number of edges\n";
	int e; cin>>e;
	for(int i=0;i<e;i++){
		cout << "Enter two ends of the edge\n";
		int a,b; cin >>a>>b;
		AddEdge(vec,a,b);
	}
	cout << "Edgency list representation of given graph is\n";
	for(int i=0;i<v;i++){
		for(it=vec[i].begin();it!=vec[i].end();it++) cout << *it << " -> "; cout << "\n";
	}
	cout << "BFS of given graph form vectex 0 is\n";
	bfs(vec,v);
	return 0;
}