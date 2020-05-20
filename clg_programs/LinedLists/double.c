#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(struct node *head,int n){
	struct node *new=memory;
	new->data=n;
	if(head==NULL){
		new->left=NULL;
		new->right=NULL;
		head=new;
	}
	else{
		new->left=NULL;
		new->right=head;
		head=new;
	}
	return head;
}
void display(struct node *head){
	struct node *tmp=head;
	while(tmp){
		printf("%d->",tmp->data);
		tmp=tmp->right;
	}
}
int main(){
	struct node *head=NULL;
	int n;
	do{
		scanf("%d",&n);
		head=create(head,n);
	}while(n!=-1);
	display(head);
	return 0;
}