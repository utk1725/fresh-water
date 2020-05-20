#include <LEDA/graph.h>
#include <LEDA/node_array.h>
#include <LEDA/basic_graph_alg.h>
#include <LEDA/string.h>

using leda::graph;
using leda::node;
using leda::node_array;
using leda::TOPSORT;
using leda::string;
using std::cout;


int main()
{
  graph G;

  node v0 = G.new_node();
  node v1 = G.new_node();
  node v2 = G.new_node();
  node v3 = G.new_node();
  node v4 = G.new_node();
  node v5 = G.new_node();
  node v6 = G.new_node();
  node v7 = G.new_node();

  G.new_edge(v0, v1);
  G.new_edge(v0, v3);
  G.new_edge(v1, v2);
  G.new_edge(v2, v3);
  G.new_edge(v4, v5);
  G.new_edge(v5, v0);
  G.new_edge(v5, v2);
  G.new_edge(v6, v1);
  G.new_edge(v6, v4);
  G.new_edge(v7, v2);
  G.new_edge(v7, v3);
  G.new_edge(v7, v6);
  G.new_edge(v0, v1);

  node_array<string> name(G);
  name[v0] = "A";
  name[v1] = "B";
  name[v2] = "C";
  name[v3] = "D";
  name[v4] = "E";
  name[v5] = "F";
  name[v6] = "G";
  name[v7] = "H";
    
  cout << "This graph has " << G.number_of_nodes() << " nodes and ";
  cout                      << G.number_of_edges() << " edges.\n";


  node_array<int> top_num(G);
  
  if(!TOPSORT(G, top_num)) {
    cout << "G has no topological sorting!\n";
  }
  else {
    node v;

    cout << "The following is a topological sorting:\n";
    forall_nodes(v,G)
      cout << name[v] << " " << top_num[v] << "\n";


    G.sort_nodes(top_num);
    cout << "Nodes sorted topologically:\n";
    forall_nodes(v,G)
      cout << name[v] << " " << top_num[v] << "\n";
  }
}