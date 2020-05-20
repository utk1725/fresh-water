#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define memory (struct node*)malloc(sizeof(struct node))
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int num){
	struct node *newnode= memory;
	newnode->data=num;
	newnode->next=NULL;
	if(!head) head=newnode;
	else{
		struct node *tmp=head;
		while(tmp->next) tmp=tmp->next;
		tmp->next=newnode;
	}
}
void display(){
	struct node *tmp=head;
	cout << endl;
	while(tmp){
		cout << tmp->data <<"->";
		tmp=tmp->next;
	}
	cout <<"NULL"<<endl;
}
void ReversePrint(struct node *head)
{
	if(!head) return;
    struct node* p1=head,*head1,*p2,*p3;
    p2=head->next;
    p3=p2;
    if(head->next==NULL)
        printf("%d\n",head->data);
    else if(head->next->next==NULL)
        printf("%d\n%d\n",head->next->data,head->data);
    else
    {
    while(p3->next!=NULL)
    {
        p3=p3->next;
        p2->next=p1;
        p1=p2;
        p2=p3;
    }head->next=NULL;
        p3->next=p1;
        while(p3!=NULL)
        {
            printf("%d\n",p3->data);
            p3 =p3->next;
        }
    }
}
int main(){
	int num;
	while(1){
		cin >> num;
		if(num==-1) break;
		insert(num);
	}
	cout<< "normal list is " << endl; display();
	cout << "reverse list is "<< endl; 
	ReversePrint(head);
	return 0;
}