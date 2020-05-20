#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <limits.h>
using namespace std;
struct node{
	float length;
	float energy;
	float key;
	vector <node*> child;
	struct node *parent;
};
float nodes= 5; // Number of nodesin graph	
float length[5][5]= {0,10,13,0,0, 0,0,10,12,0, 0,0,0,10,14, 0,0,0,0,10, 0,0,0,0,0};
float energy[5][5]= {0,0,4,0,0, 0,0,0,6,0, 0,0,0,0,5, 0,0,0,0,0, 0,0,0,0,0};

void prfloat_path(struct node *target){
	stack <float> stk;
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

struct node *get_that_leaf(node* root,float max_len){
	if(!root) return NULL;
	struct node *answer=NULL;
	float min_energy=float_MAX;
	queue <node*> q;
	q.push (root);
	
	while(!q.empty()){
		float n= q.size();
		while(n>0){
			node* p= q.front();
			q.pop();
			if(p->child.size()==0 && p->length <= max_len && p->energy < min_energy){
				min_energy= p->energy;
				answer=p;
			}
			for(float i=0; i<p->child.size(); i++){
				q.push(p->child[i]);
			}
			n--;
		}
		cout << endl;
	}
	return answer;
}

void *insert_to_parent(struct node *parent, float num,float len, float ene){
	struct node *new_node= new node;
	new_node->key= num;
	new_node->length = len;
	new_node->length= new_node->length+ parent->length;
	new_node->energy= ene;
	new_node->energy= new_node->energy + parent->energy;
	new_node->parent= parent;
	parent->child.push_back(new_node);
}
void insert_under(struct node *parent,float row){
	for(float i=0;i<nodes;i++){
		if(length[row-1][i]!=0){
			insert_to_parent(parent,i+1,length[row-1][i],energy[row-1][i]);
		}
	}
}
void find_me_in_tree(struct node *root,float num){
	
	queue <node*> q;
	q.push (root);
	
	while(!q.empty()){
		float n= q.size();
		while(n>0){
			node* p= q.front();
			q.pop();
			if(p->key==num) insert_under(p,num);
			for(float i=0; i<p->child.size(); i++){
				q.push(p->child[i]);
			}
			n--;
		}
	}
}
struct node *create_root(float r_val){
	struct node *new_node= new node;
	new_node->length=0;
	new_node->energy=0;
	new_node->key= r_val;
	new_node->parent=NULL;
	return new_node;
}
float main(){
	struct node *root =NULL;
	root= create_root(1);

	for(float i=1;i<=nodes;i++) find_me_in_tree(root,i);

	float max_len;
	cout << endl << "Enter length constrafloat" << endl;
	cin >> max_len;
	
	struct node *target=get_that_leaf(root,max_len);
	if(!target) cout << "No such path found" << endl;
	else {
		cout << "The path with minimum energy which has atmost "<<max_len<<" is" <<endl;
		prfloat_path(target);
		cout << "Length of this path is " << target->length << endl;
		cout << "Energy of this path is " << target->energy << endl;
	}
	return 0;
}
