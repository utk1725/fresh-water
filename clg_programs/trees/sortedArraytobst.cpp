#include<iostream>
#include<stack>
using namespace std;
struct Node{
	int data;
	struct Node* left,*right;
};
Node *constructBBST(int A[],int low,int high){
	if(high<low) return NULL;
	int mid=low+(high-low)/2;
	Node *tmp=(Node*)malloc(sizeof(Node*));
	tmp->data=A[mid];
	tmp->left=constructBBST(A,low,mid-1);
	tmp->right=constructBBST(A,mid+1,high);
	return tmp;
}
void preorder(Node *root){
	if(!root) return;
	stack<Node*> stk;
	while(1){
		while(root){
			printf("%d ",root->data);
			stk.push(root);
			root=root->left;
		}
		if(stk.empty()) break;
		root=stk.top();
		stk.pop();
		root=root->right;
	}	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int A[n];
		for(int i=0;i<n;i++) scanf("%d",&A[i]);
		Node *root=constructBBST(A,0,n-1);
		preorder(root);
	}
}