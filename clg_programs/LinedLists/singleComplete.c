#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
};
struct node *create(struct node *head){
	struct node *new;
	printf("enter -1 to end\n");
	int num;
	scanf("%d",&num);
	while(num!=-1){
		new=memory;
		new->data=num;
		if(head==NULL){
			new->next=NULL;
			head=new;
		}
		else{
			new->next=head;
			head=new;
		}
		printf("\nenter data\n");
		scanf("%d",&num);
	}
	return head;
}
struct node *display(struct node *head){
	struct node *t=head;
	while(t){
		printf("%d ",t->data);
		t=t->next;
	}
	return head;
}
struct node *insertAtStart(struct node *head){
	struct node *new=memory;
	scanf("%d",&new->data);
	new->next=head;
	head=new;
	return head;
}
struct node *insertAtEnd(struct node *head){
	struct node *t=head,*new=memory;
	scanf("%d",&new->data);
	while(t->next) t=t->next;
	t->next=new;
	new->next=NULL;
	return head;
}
struct node *addBefore(struct node *head){
	struct node *new=memory,*t=head,*ptmp;
	scanf("%d",&new->data);
	int ele;scanf("%d",&ele);
	//here if only one node in ll then it is the ccase of insert at head
	while(t->data!=ele){
		ptmp=t;
		t=t->next;
	}
	new->next=t;
	ptmp->next=new;
	return head;
}
struct node *addAfter(struct node *head){
	struct node *t=head,*new=memory;
	scanf("%d",&new->data);
	int ele;scanf("%d",&ele);
	while(t->data!=ele) t=t->next;
	new->next=t->next;
	t->next=new;
	return head;
}
struct node *addinSorted(struct node *head){
	struct node *t=head,*new=memory,*ttmp;
	scanf("%d",&new->data);
	while(t->data<new->data){
		printf("%d",new->data);
		ttmp=t;
		t=t->next;
		if(t==NULL) break;
	}if(t==NULL){
		ttmp->next=new;
		new->next=NULL;
	}else{
		new->next=t;
		ttmp->next=new;
	}
	return head;
}
struct node *deleteAtBegin(struct node *head){
	if(head==NULL) return head;
	else{
		struct node *t=head;
		head=head->next;
		free(t);
		return head;	
	}
}
struct node *deleteAtEnd(struct node *head){
	if(head==NULL) return head;
	if(head->next==NULL){
		free(head);
		head=NULL;
		return head;
	}
	else{
		struct node *t=head;
		while(t->next->next) t=t->next;
		free(t->next);
		t->next=NULL;
		return head;
	}
}
struct node *deleteGiven(struct node *head){
	//need atleast 4 nodes or 3
	struct node *t=head;
	int num;scanf("%d",&num);
	while(t->next->data!=num) t=t->next;
	struct node *t1=t->next;
	t->next=t->next->next;
	free(t1);
	return head;
}
struct node *deleteBefore(struct node *head){
	int num;scanf("%d",&num);//check for null and single and double node conditions
	struct node *t=head,*t1;
	while(t->next->next->data!=num) t=t->next;
	t1=t->next;
	t->next=t->next->next;
	free(t1);
	return head;
}
struct node *deleteAfter(struct node *head){
	int  num;scanf("%d",&num);
	struct node *t=head,*t1;
	while(t->data!=num) t=t->next;
	t1=t->next;
	t->next=t->next->next;
	free(t1);
	return head;
}
struct node *deleteEntire(struct node *head){
	struct node *t;
	while(head->next){
		t=head;
		head=head->next;
		free(t);
	}
	free(head);
	head=NULL;
	return head;
}
struct node *sort(struct node *head){
	struct node *t=head,*t1;
	int tmp;
	while(t->next){
		t1=t;
		while(t1){
			if(t->data > t1->data){
				tmp=t->data;
				t->data=t1->data;
				t1->data=tmp;	
			}t1=t1->next;
		}t=t->next;
	}
	return head;
}
int main(){
	struct node *head=NULL;
	int ch;
	do{
		printf("\n1->Create			2->Display\n");
		printf("3->Add at begin			4->Add at end\n");
		printf("5->Add before given		6->Add after given\n");
		printf("7->Add in sorted list		8->Delete from begin\n");
		printf("9->Delete from end		10->Delete a givne node\n");
		printf("11->delete before a given	 12->Delete after\n");
		printf("13->Delete entire list		14->Sort the list\n");
		printf("0->Exit\nEnter your option\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				head=create(head);
				printf("\nlist created\n");
				break;
			case 2:
				head=display(head);
				break;
			case 3:
				head=insertAtStart(head);
				break;
			case 4:
				head=insertAtEnd(head);
				break;
			case 5:
				head=addBefore(head);
				break;
			case 6:
				head=addAfter(head);
				break;
			case 7:
				head=addinSorted(head);
				break;
			case 8:
				head=deleteAtBegin(head);
				break;
			case 9:
				head=deleteAtEnd(head);
				break;
			case 10:
				head=deleteGiven(head);
				break;
			case 11:
				head=deleteBefore(head);
				break;
			case 12:
				head=deleteAfter(head);
				break;
			case 13:
				head=deleteEntire(head);
				break;
			case 14:
				head=sort(head);
				break;
		}
		}while(ch!=0);
	return 0;
}
