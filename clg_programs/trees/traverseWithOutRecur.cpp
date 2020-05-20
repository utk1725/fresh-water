/*
Tree Traversals without using recursion.
Author: ~pk
*/
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
	struct node *newnode=memory;
	newnode->data= num;
	newnode->right= newnode->left= NULL;
	if(!root) root= newnode;
	else if(num< root->data) root->left=insert(root->left,num);
	else if(num> root->data) root->right=insert(root->right,num);
	else cout<< "duplicate";
	return root;
}
void inorder(struct node *root){
		stack<node*> s;
		while(1){
			while(root){
				s.push(root);
				root=root->left;
			}
			
			if(s.empty()) break;
			
			root= s.top();
			s.pop();
			cout << root->data << " ";
			root= root->right;
		}
}
void preorder(struct node *root){
	stack<node*> s;
	while(1){
		while(root){
			cout << root->data << " ";
			s.push(root);
			root= root->left;
		}
		if(s.empty()) break;
		root= s.top();
		s.pop();
		root= root->right;
	}
}
void postorder(struct node *root){
	stack<node*> s;
	struct node *prev=NULL;
	do{
		while(root){
			s.push(root);
			root= root->left;
		}
		while(root==NULL && !s.empty()){
			root= s.top();
			if(root->right==NULL || root->right==prev){
				cout << root->data;
				prev= root;
				s.pop();
				root= NULL;
			}
			else root= root->right;
		}
	}while(!s.empty());
}
int main(){
	struct node *root=NULL;
	int num;
	while(1){
		cin >> num;
		if(!num) break;
		root= insert(root,num);
	}
	cout << endl<< "inorder is" << endl;
	inorder(root);
	cout << endl<< "preorder is" << endl;
	preorder(root);
	cout << endl<< "postorder is" << endl;
	postorder(root);
	return 0;
}