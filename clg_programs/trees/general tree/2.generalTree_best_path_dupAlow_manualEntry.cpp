#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <limits.h>
using namespace std;
struct node{
	int length;
	int energy;
	int key;
	vector <node*> child;
	struct node *parent;
};
struct node *get_that_leaf(node* root,int max_len){
	if(!root) return NULL;
	struct node *answer=NULL;
	int min_energy=INT_MAX;
	queue <node*> q;
	q.push (root);
	
	while(!q.empty()){
		int n= q.size();
		while(n>0){
			node* p= q.front();
			q.pop();
			if(p->child.size()==0 && p->length <= max_len && p->energy < min_energy){
				min_energy= p->energy;
				answer=p;
			}
			for(int i=0; i<p->child.size(); i++){
				q.push(p->child[i]);
			}
			n--;
		}
		cout << endl;
	}
	return answer;
}
struct node *create_root(){
	struct node *new_node= new node;
	new_node->length=0;
	new_node->energy=0;
	cout << "Enter root node data" << endl;
	int n;
	cin >> new_node->key;
	new_node->parent=NULL;
	return new_node;
}
void print_path(struct node *target){
	stack <int> stk;
	while(target){
		stk.push(target->key);
		target= target->parent;
	}
	while(!stk.empty()){
		cout << stk.top() << "->";
		stk.pop();
	}
	cout <<"NULL"<< endl;
}

struct node *insert_to_parent(struct node *parent, int num){
	struct node *new_node= new node;
	new_node->key= num;
	cout << "Enter length between " << parent->key << " to " << num << endl;
	cin >> new_node->length;
	new_node->length= new_node->length+ parent->length;
	cout << "Enter energy between " << parent->key << " to " << num << endl;
	cin >> new_node->energy;
	new_node->energy= new_node->energy + parent->energy;
	new_node->parent= parent;
	int n= parent->child.size();
	parent->child.push_back(new_node);
	
	return new_node;
}

int main(){
	struct node *root =NULL;
	queue <node*> q_store;
	int num_of_values;
	cout <<"First create root node " << endl;
	root= create_root();
	q_store.push(root);
	struct node *parent, *last_inserted;

	while (!q_store.empty()){
	   parent= q_store.front();
	   q_store.pop();
	cout << "By the level order of current tree the next node found is "<<parent->key<<" how many values you want to insert under this node"<<endl;
	cin >> num_of_values;
	for(int i=1;i<=num_of_values;i++){
	 	cout << "Enter child "<<i<< " under node" << parent->key << endl;
		int val;
		cin >> val;
		last_inserted= insert_to_parent(parent,val);
		q_store.push(last_inserted);
	   }
	}

	int max_len;
	cout << "Enter length constraint" << endl;
	cin >> max_len;
	
	struct node *target=get_that_leaf(root,max_len);
	if(!target) cout << "No such path found" << endl;
	else {
		cout << "The path with minimum energy which has atmost "<<max_len<<" is" <<endl;
		print_path(target);
	}
	return 0;
}
