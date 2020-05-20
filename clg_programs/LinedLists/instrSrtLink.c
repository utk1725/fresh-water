#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
};
int find_pos(struct node *head,int num){
	if(head==NULL || head->data >= num) return -1; // indicates that element need to be inserted at first position
	else{
		struct node *tmp=head;
		while(tmp){
			if(num<=tmp->data) return tmp->data; // finding to which element before we need to insert the data
			tmp=tmp->next;
		}
	}
	return -2; // indicates element need to be inserted at last position
}
struct node *athead(struct node *head,int n){
	struct node *new=memory;
	new->data=n;
	if(head==NULL){
		new->next=NULL;
		head=new;
	}else{
		new->next=head;
		head=new;
	}
	return head;
}
struct node *atlast(struct node *head,int n){
	struct node *new=memory;
	struct node *tmp=head;
	new->data=n;
	while(tmp->next) tmp=tmp->next;
	tmp->next=new;
	new->next=NULL;
	return head;
}
struct node *srtdpos(struct node *head,int n,int val){
	struct node *new=memory;
	struct node *tmp=head;
	new->data=n;
	while(tmp->next && tmp->next->data != val ) tmp=tmp->next;
	new->next=tmp->next;
	tmp->next=new;
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
	int n,insrt_pos;
	while(1){
		scanf("%d",&n);
		insrt_pos=find_pos(head,n);
		if(insrt_pos==-1) head=athead(head,n);
		else if(insrt_pos==-2) head=atlast(head,n);
		else head=srtdpos(head,n,insrt_pos);
		display(head);
	}
	return 0;
}