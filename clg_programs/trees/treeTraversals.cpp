/*
1. convert a given binary tree to doubly linked list
2.lowest common ancestor in a binary tree and bst
3. print nodes at k distance from root
4. print right, left, top, bottom view of a binary tree
5. breadth first traversal for a graphdefaults
6. dfs of graphdefaults
6. check linked list is palindrome or not1
7. print every kth node of the linked list
8. multiply two numbrs represented by linked lsit
9.detect loop in linke list
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left, *right;
};
node* newnode(int data){
	node *tmp= new node;
	tmp->data= data;
	tmp->left= tmp->right= NULL;
	return tmp;
}
void preorder(node *root){
	if(!root) return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node *root){
	if(!root) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void postorder(node *root){
	if(!root) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
int main(){
	node *root=NULL;
	root= newnode(1);
	root->right= newnode(3);
	root->left= newnode(2);
	root->left->left= newnode(4);
	root->left->right= newnode(5);
	
	preorder(root); cout <<"\n";
	inorder(root); cout <<"\n";
	postorder(root); cout <<"\n";
}