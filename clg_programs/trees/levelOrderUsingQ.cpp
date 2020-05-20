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
void insert(int num){
	// constructing simple binary tree (NOT bst)
	struct node *newnode= memory;
	newnode->data= num;
	newnode->left= newnode->right= NULL;
	
	if(!root) {root=newnode;return;} // if no root make newnode as root
	
	queue<node*> q;
	struct node *tmp;
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
		
	}
	
}
void levelorder(){
	if(!root) return;
	queue<node*> q;
	struct node *tmp;
	q.push(root);
	
	while(!q.empty()){
		tmp= q.front();
		q.pop();
		cout<< tmp->data << " ";
		if(tmp->left) q.push(tmp->left);
		if(tmp->right) q.push(tmp->right);
	}
}
int main(){
	int num;
	while(1){
		cin >> num;
		if(!num) break;
		insert(num);
	}
	// level order using queue
	levelorder();
	return 0;
}