//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-watching-fight/
#include<bits/stdc++.h>
using namespace std;
struct bstNode{
	int data;
	bstNode *left, *right;
};
bstNode *insert(bstNode *root, int x){
	if(!root){
		bstNode *newNode= new bstNode;
		newNode->data= x;
		newNode->left= newNode->right= NULL;
		return newNode;
	}
	if(x > root->data) root->right=insert(root->right,x);
	else  root->left=insert(root->left,x);
	
	return root;
}
int height(bstNode *root){
	if(!root) return 0;
	int l= height(root->left);
	int r= height(root->right);
	if (l>r) return 1+l;
	else return 1+r;
}
int main(){
	
	bstNode *root= NULL;
	int n,x;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		root= insert(root,x);
	}
	cout << height(root);
	return 0;
}