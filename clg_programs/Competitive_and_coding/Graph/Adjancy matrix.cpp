#include<bits/stdc++.h>
using namespace std;
int main(){
	cout << "Enter number of vertices\n";
	int v; cin >>v;
	int ar[v][v];
	for(int i=0;i<v;i++) for(int j=0;j<v;j++) ar[i][j]=0;
	cout << "Enter number of edges\n";
	int e; cin>>e;
	for(int i=0;i<e;i++){
		cout << "Enter two ends of edges \n";
		int a,b ; cin>>a>>b;
		ar[a][b]=1;
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++) cout << ar[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
/* #include<iostream>
#include<malloc.h>
using namespace std;
struct Graph{
	int V;
	int E;
	int **adj;
};
struct Graph *adjMatrixOfGraph(){
	struct *G= (struct Graph*)malloc(sizeof(struct Graph)); // or in c++ we can do struct G= new Graph;
	if(!G) {cout << "Memory Error!" << "\n"; return;}
	cout << "Number of Vectices and ediges?? " << "\n";
	cin >> G->V >> G->V;
	G->adj= malloc(sizeof(G->V * G->E));
	for(int i=0;i<G->V; i++){
		for(int j=0;j<G->V;j++){
			adj[i][j]=0;
		}
	}
	return G;
}
int main(){
	struct G= adjMatrixOfGraph();
	return 0;
} */