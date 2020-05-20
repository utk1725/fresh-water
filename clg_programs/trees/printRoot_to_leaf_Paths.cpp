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
struct node *root=NULL;
void constructBinary(int num){
	struct node *newnode= memory;
	newnode->data= num;
	newnode->left= newnode->right= NULL;
	
	if(!root) {root=newnode; return;}
	
	queue<node*> q;
	q.push(root);
	struct node *tmp;
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
void LevelOrder(struct node *root){
	if(!root) return;
	queue <node*> q;
	q.push(root);
	
	struct node *tmp;
	while(!q.empty()){
		tmp= q.front();
		q.pop();
		cout << tmp->data << " ";
		if(tmp->left) q.push(tmp->left);
		if(tmp->right) q.push(tmp->right);
	}
}
void printPath(int *ary,int pth_len){
	for(int i=0;i<pth_len;i++) cout << ary[i] << " ";
	cout << endl;
}
void printRoottoLeafPath(struct node *root, int *ary, int pth_len){
	if(!root) return;
	ary[pth_len++] = root->data;
	if(!root->left && !root->right) printPath(ary,pth_len);
	else{
		printRoottoLeafPath(root->left, ary, pth_len);
		printRoottoLeafPath(root->right, ary, pth_len);
	}
}
int main(){
	int num;
	while(1){
		cin >> num;
		if(!num) break;
		constructBinary(num);
	}
	LevelOrder(root);
	cout << endl;
	int ary[100];
	int pth_len=0;
	printRoottoLeafPath(root,ary,pth_len);
	return 0;
}