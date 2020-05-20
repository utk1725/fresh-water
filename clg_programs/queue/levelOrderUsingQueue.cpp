#include<iostream>
#include<stdlib.h>
#include<queue>
#define memory (struct treeNode*)malloc(sizeof(struct treeNode))
using namespace std;
struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

class lvlcls{
	public:
			struct treeNode *insert(struct treeNode *root,int num){
				struct treeNode *newnode= memory;
				newnode->data=num;
				newnode->left= newnode->right= NULL;
				if(!root) root= newnode;
				else if(num< root->data) root->left=insert(root->left,num);
				else if(num> root->data) root->right=insert(root->right,num);
				else cout<< "duplicate data" << endl;
				return root;
			}
			void levlOrder(struct treeNode *root){
				queue<treeNode*> q;
				struct treeNode *tmp= root;
				
				while(tmp){
					cout << tmp->data << " ";
					if(tmp->left) q.push(tmp->left);
					if(tmp->right) q.push(tmp->right);
					
					tmp= q.front();
					q.pop();
				}
			}
};
int main(){
	lvlcls lc;
	int num;
	struct treeNode *root= NULL;
	while(1){
		cin>> num;
		if(num==-1) break;
		root=lc.insert(root,num);
	}
	
	cout<< "level order is" << endl;
	lc.levlOrder(root);
	return 0;
}


/*
deque<Node*> treeQueue;

void levelOrder(Node* root){
    if( root ){
        treeQueue.push_back(root);
    }
    while( !treeQueue.empty() ){  
        Node* tree = treeQueue.front();
        treeQueue.pop_front();

        cout << tree->data << " ";

        if( tree->left ){
            treeQueue.push_back( tree->left );
        }
        if( tree->right ){
            treeQueue.push_back( tree->right );
        }
    }
}
*/