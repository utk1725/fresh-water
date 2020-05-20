#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
}
struct node * insrt(struct node *head){
	struct node *new=NULL;
	printf("Enter a value\n");
	scanf("%d",new->data);
	if(head==NULL){
		new->next=NULL;
		head=new;
	}
	return head;
}
void display(struct node *head){
	struct node *temp;
	temp=head;
	while(temp){
		printf("%d ")
	}
}
int main(){
	struct node *head=NULL;
	head=insrt(head);
	display(head);
	return 0;
}