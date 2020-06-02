#include<iostream>
#include<map>
#include<queue>
#include<list>

using namespace std;

template<typename T>
class Graph{
    map<T, list<T>> l;
public:
    void addEdge(T x, T y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T src){
        queue<T> q;
        map<T, bool> visited;

        visited[src] = true;
        q.push(src);

        while(!q.empty()){
            T cur_node = q.front();
            q.pop();
            cout << cur_node << " ";
            for(int nbr:l[cur_node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};
int main(){
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.bfs(0);
    return 0;
}