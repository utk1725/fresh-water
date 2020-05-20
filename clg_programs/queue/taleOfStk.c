#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
struct node *enQ(struct node *rear,int num,struct node *front){
	struct node *new=memory;
	new->data=num;
	if(rear==NULL){
		new->next=NULL;
		rear=new;
	}
	else{
		rear->next=new;
		new->next=NULL;
		rear=new;
	}
	return rear;
}
struct node *deQ(struct node *front){
	struct node *tmp=front;
	if(front){
		front=front->next;
		free(tmp);
	}
	return front;
}
void disp(struct node *front){
			struct node *tmp= front;
			while(tmp){
				printf("%d ",front->data);
				tmp= tmp->next;
			}
		}
int main(){
	int n,ch,num,flag=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&ch);
		if(ch==1){
			scanf("%d",&num);
			//if(rear==NULL) flag=1;
			rear=enQ(rear,num,front);
			if(front==NULL) front=rear;
		}
		else if(ch==2) front=deQ(front);
		else disp(front);
	}
	return 0;
}