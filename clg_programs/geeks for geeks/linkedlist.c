#include<stdio.h>
#include<stdlib.h>
#define memory_alct (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
};
struct node *create(struct node *head){
	struct node *new;
	int n;
	scanf("%d",&n);
	while(n!=-1){
	new=memory_alct;
	new->data=n;
	if(head==NULL){
		new->next=NULL;
		head=new;
	}else{
		new->next=head;
		head=new;
	}
	scanf("%d",&n);
	}
	return head;
}
void display(struct node *head){
	struct node *tmp=head;
	while(tmp){
		printf("%d->",tmp->data);
		tmp=tmp->next;
	}
}


int main(){
	struct node *head=NULL;
	head=create(head);
	printf("just now insertion completed now going to display\n");
	display(head);
	return 0;
}