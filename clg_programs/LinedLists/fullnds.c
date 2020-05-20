#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *left, *right;
};
struct node *create(struct node *head, int n){
	if(head==NULL){
		struct node *new=memory;
		new->data=n;
		new->left=new->right=NULL;
		head=new;
	}
	else if(n < head->data) head->left=create(head->left,n);
	else if(n > head->data) head->right=create(head->right,n);
	else printf("Duplicate entry\n");
	return head;
}
void inord(struct node *head){
	if(head){
		inord(head->left);
		printf("%d  ",head->data);
		inord(head->right);
	}
}
void full(struct node *head){
	if(head->left && head->right) printf("%d ",head->data);
	if(head->left) full(head->left);
	if(head->right) full(head->right);
}
void topl(struct node *head){
	if(head->left) topl(head->left);
	printf("%d ",head->data);
}
void toplr(struct node *head){
	if(head->right) topr(head->right);
	printf("%d ",head->data);
}
int main(){
	struct node *head=NULL;
	int n;
	printf("Enter values to insert into binary search tree\n");
	scanf("%d",&n);
	while(n!=-1){
		head=create(head,n);
		scanf("%d",&n);
	}
	printf("\n Inorder of given BST \n");
	inord(head);
	printf("\nFull nodes of BST are\n");
	full(head);
	printf("\n Top view of BST\n");
	topl(head);topr(head);
	return 0;
}