#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(struct node *head,int n){
	if(head==NULL){
		struct node *new=memory;
		new->data=n;
		new->left=new->right=NULL;
		head=new;
	}
	else if(n< head->data)	head->left=create(head->left,n);
	else if(n> head->data) head->right=create(head->right,n);
	else printf("Duplicate node\n");
	return head;
}
void inorder(struct node *head){
	if(head){
		inorder(head->left);
		printf("%d->",head->data);
		inorder(head->right);
	}
}
void preorder(struct node *head){
	if(head){
		printf("%d->",head->data);
		preorder(head->left);
		preorder(head->right);
	}
}
void postorder(struct node *head){
	if(head){
		printf("%d->",head->data);
		postorder(head->left);
		postorder(head->right);
	}
}
int main(){
	struct node *head=NULL;
	int n;
	printf("Enter element into bst\n");
	scanf("%d",&n);
	while(n!=-1){
		head=create(head,n);
		scanf("%d",&n);
	}
	inorder(head);printf("\n");
	preorder(head);printf("\n");
	postorder(head);
	return 0;
}