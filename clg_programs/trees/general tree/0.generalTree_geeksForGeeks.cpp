#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct node{
	int key;
	vector <node*> child;
};
node *newnode(int key){
	node *tmp = new node;
	tmp->key = key;
	return tmp;
}
void levelorder(node* root){
	if(!root) return;
	
	queue <node*> q;
	q.push (root);
	
	while(!q.empty()){
		int n= q.size();
		while(n>0){
			node* p= q.front();
			q.pop();
			cout  << " " << p->key << " ";
			for(int i=0; i<p->child.size(); i++){
				q.push(p->child[i]);
			}
			n--;
		}
		cout << endl;
	}
}
void preorder(node* root){
	if(!root) return;
	cout << root->key << " ";
	if(root->child.size()){
		vector <node*> tmpVec= root->child;
		for(int i=0;i<tmpVec.size(); i++){
			preorder(tmpVec[i]);
		}
	}
}
void salesPath(node* root){
	if(!root) return;
	cur_min+= root->data;
	
	cout << root->key << " ";
	if(root->child.size()){
		vector <node*> tmpVec= root->child;
		for(int i=0;i<tmpVec.size(); i++){
			preorder(tmpVec[i]);
		}
	}
}
void postorder(node* root){
	if(!root) return;
	if(root->child.size()){
		vector <node*> tmpVec= root->child;
		for(int i=0;i<tmpVec.size(); i++){
			postorder(tmpVec[i]);
		}
	}
	cout << root->key << " ";
}
int main(){
	node *root= newnode(1);
	(root->child).push_back(newnode(2));
	(root->child).push_back(newnode(3));
	(root->child).push_back(newnode(4));
	(root->child).push_back(newnode(5));
	(root->child[0]->child).push_back(newnode(6));
	(root->child[0]->child).push_back(newnode(7));
	(root->child[2]->child).push_back(newnode(8));
	(root->child[3]->child).push_back(newnode(9));
	(root->child[3]->child).push_back(newnode(10));
	(root->child[3]->child).push_back(newnode(11));
	
	cout << "Level order traversal of the given general tree is " << endl;
	levelorder(root);
	
	cout << "preorder traversal of the given tree is " << endl;
	preorder(root);
	cout << endl;
	
	cout << "postorder traversal of the given tree is " << endl;
	postorder(root);
	cout << endl;
	return 0;
}