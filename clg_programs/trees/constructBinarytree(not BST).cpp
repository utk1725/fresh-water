#include<iostream>
#include<stdlib.h>
#include<queue>
#define memory (struct node*)malloc(sizeof(struct node))
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root= NULL;
class binaryTree{
	public:
		void insert(int element){
			queue<node*> q;
			struct node *tmp;
			struct node *newnode= memory;
			
			newnode->left= newnode->right= NULL;
			if(!newnode) {cout<< "memory error" << endl; return;}
			
			newnode->data= element;
			if(!root) root=newnode;
			else{
			q.push(root);
			
			while(!q.empty()){
				tmp= q.front();
				q.pop();
				
				if(tmp->left) q.push(tmp->left);
				else{
					tmp->left= newnode;
					while(!q.empty()) q.pop();
					return;
				}
				if(tmp->right) q.push(tmp->right);
				else{
					tmp->right= newnode;
					while(!q.empty()) q.pop();
					return;
				}
			}}
		}
		
		void preorder(struct node *root){
			if(root){
				cout << root->data << " ";
				preorder(root->left);
				preorder(root->right);
			}
		}
};
int main(){
	int element;
	
	binaryTree bt;
	while(1){
		cout << "enter element. Enter -1 to stop \n";
		cin >> element;
		if (element== -1) break;
		bt.insert(element);
	}
	cout << endl << "pre order is " << endl;
	bt.preorder(root);
	return 0;
}