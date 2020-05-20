#include<bits/stdc++.h>
//http://www.geeksforgeeks.org/wp-content/uploads/graph_representation12.png 
// this is graph link
// This is for weighted graph
#include <iostream>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
void addEdge(vector<pair<int,int>> vec[], int a, int b, int c){
	vec[a].push_back({b,c});
	vec[b].push_back({a,c});
}
int main(){
	int a,b,c;
	cout << "Enter number of vectices\n";
	int v; cin >> v;
	vector <pair<int,int>> vec[v];
	vector <pair<int,int>> :: iterator it;
	cout << "Enter number of edges \n";
	int e; cin >> e;
	for(int i=0;i<e;i++){
		cout << "Enter two ends of edge and its weight\n";
		cin >>a>>b>>c;
		addEdge(vec,a,b,c);
	}
	for(int i=0;i<v;i++){
		for(it=vec[i].begin(); it!=vec[i].end();it++) cout << it->first << " " << it->second << " -> ";
		cout << "\n";
	}
	return 0;
}
/*
//This is for unweighted graph
using namespace std;
void AddEdge(vector<int> adj[],int a,int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}
int main(){
	cout << "Enter number of vectices " << "\n";
	int V; cin >> V;
	vector<int> :: iterator it;
	vector <int> adj[V];
	cout << "Enter number of edges " << "\n";
	int E; cin >> E;
	for(int i=0;i<E;i++){
		cout << "Enter two ends of edges" << "\n";
		int a,b; cin>>a>>b;
		AddEdge(adj,a,b);
	}
	for(int i=0;i<V;i++){
		for(it=adj[i].begin();it!=adj[i].end();it++) cout << *it << " -> "; 
		cout << "\n";
	}
	return 0;
}
*/