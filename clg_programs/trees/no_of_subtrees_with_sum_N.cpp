#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
};
 
// function to get a new node
Node* getNode(int data)
{
    // allocate space
    Node* newNode = (Node*)malloc(sizeof(Node));
 
    // put in the data
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 
int sbutT(Node root,int x){
	if(!root) return 0;
	static int count=0;
	if(x== root->data+ subT(root->left,x)+subT(root->right,x)) count++;
	return count;
}
int main(){
	 Node* root = getNode(5);
    root->left = getNode(-10);
    root->right = getNode(3);
    root->left->left = getNode(9);
    root->left->right = getNode(8);
    root->right->left = getNode(-4);
    root->right->right = getNode(7);
 
    int x = 7;
 
    cout << "Count = "
         << subT(root, x);
 
    return 0;
}