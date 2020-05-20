#include<iostream>
#include<stdlib.h>

#define memory (struct node*)malloc(sizeof(struct node))
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

class binarySrchTree{
	public:

		struct node *insert(struct node *root, int n){
			struct node *newnode;
			newnode= memory;
			newnode->data= n;
			newnode->left= newnode->right= NULL;
			if(!root) root=newnode;
			else if(n< root->data) root->left=insert(root->left,n);
			else if(n> root->data) root->right=insert(root->right,n);
			else cout<< "duplicate data" << endl;
			return root;
		}

		void preorder(struct node *root){
			if(root){
				
				preorder(root->left);
				cout << root->data << endl;
				preorder(root->right);
			}
		}

		int treesize(struct node *root){
			if(!root) return 0;
			return treesize(root->left)+1+treesize(root->right);
		}

		int getHeight(struct node *root){
			if(!root) return 0;
			int l= getHeight( root->left);
			int r= getHeight(root->right);
			return l > r ? l+1: r+1;
		}
};
int main(){
	struct node *head= NULL;
	binarySrchTree bt;
	int element;
	
	while(1){
		cin>> element;
		if (element==-1) break;
		
		head= bt.insert(head,element);
	}
	cout << "preorder of tree is "<< endl;
	bt.preorder(head);
	
	cout <<" height is "<<bt.getHeight(head)<<endl;

	cout <<" size of tre is " << bt.treesize(head)<<endl;
	
	return 0;
}