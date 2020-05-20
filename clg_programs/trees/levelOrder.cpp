#include<iostream>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root= NULL;
class bnryTree{
	public:
		struct node *insert(struct node *root, int num){
			struct node *newnode= memory;
			newnode-> data=num;
			newnode->left= newnode->right= NULL;
			if(!root) root=newnode;
			else if(root->data > num) root->left=insert(root->left,num);
			else if(root->data < num) root->right=insert(root->right,num);
			else cout<< "duplicated data entered" << endl;
			return root;
		}
		void inorder(struct node *root){
			if(!root) return;
			inorder(root->left);
			cout << root->data << endl;
			inorder(root->right);
		}
	
		int height(struct node *root){
			if(!root) return 0;
			int l= height(root->left);
			int r= height(root->right);
			return l>r? l+1: r+1;
		}

		void printLevel(struct node *root,int level){
			if(!root) return;
			else if(level==1) cout << root->data << " ";
			else if(level>1){
				printLevel(root->left,level-1);
				printLevel(root->right,level-1);
			}
		}
		void levelorder(struct node *root){
			int h= height(root);
			for(int i=1;i<=h;i++) printLevel(root,i);
		}
};
int main(){
	int num;
	bnryTree bt;
	while(1){
		cin >> num;
		if(num==-1) break;
		else (root= bt.insert(root,num));
	}
	cout << "inorder is" << endl;
	bt.inorder(root); // printing inorder to check whether tree constructed perfectly or not
	cout<< endl<<"level order is"<< endl;
	bt.levelorder(root);
	return 0;
}