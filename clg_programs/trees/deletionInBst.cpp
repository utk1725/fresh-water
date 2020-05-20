#include<iostream>
#include<stdlib.h>
#include<stack>
#define memory (struct node*)malloc(sizeof(struct node))
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *insert(struct node *root,int num){
	struct node *newnode= memory;
	newnode->data= num;
	newnode->left= newnode->right= NULL;
	if(!root) root=newnode;
	else if(num< root->data) root->left= insert(root->left,num);
	else if(num> root->data) root->right= insert(root->right,num);
	else cout << "duplicate data" << endl;
	return root;
}
void inorder(struct node *root){
	if(!root) return;
	stack<node*> s;
	while(1){
		while(root){
			s.push(root);
			root= root->left;
		}
		if(s.empty()) break;
		root= s.top();
		s.pop();
		cout << root->data;
		root= root->right;
	}
}
struct node *findRightmin(struct node *root){
	if(!root) return NULL;
	while(root){
		if(root->left==NULL) return root;
		root= root->left;
		cout << "sending right subtree min as "<<root->data;
	}
}
struct node *deleteInbst(struct node *root, int num){
	if(!root) {cout <<"root is empty\n";return root;}
	if(num < root->data) root->left=deleteInbst(root->left,num);
	else if(num> root->data) root->right=deleteInbst(root->right,num);
	else{
		if(root->left==NULL){
			struct node *tmp= root->right;
			free(root);
			return tmp;
		}
		else if(root->right==NULL){
			struct node *tmp= root->left;
			free(root);
			return tmp;
		}
		// else node has two children
		struct node *tmp= findRightmin(root->right);
		root->data= tmp->data;
		
		root->right= deleteInbst(root->right,tmp->data);
	}
	return root;
}
int main(){
	struct node *root=NULL;
	int num;
	cout << "enter elements insert into bst. enter 0 to stop"<<endl;
	while(1){
		cin >> num;
		if(!num) break;
		root= insert(root,num);
	}
	cout << "inorder of tree is "<< endl;
	inorder(root); // useful to check
	cout << endl<< "enter element to delete from tree.Enter 0 to stop"<< endl;
	while(1){
		cin >> num;
		if(!num) break;
		root= deleteInbst(root,num);
		
		cout << "inorder of tree is "<< endl;
		inorder(root); // useful to check
		cout << endl;
	}
	
	return 0;
}