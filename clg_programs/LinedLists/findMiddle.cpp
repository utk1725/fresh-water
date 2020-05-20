#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
void traverse(node *head){
	node *tmp=head;
	while(tmp){
		cout << tmp->data << " ";
		tmp=tmp->next;
	}
}
void findMiddle(node *head){
	node *fast=head, *slow=head;
	while(fast and fast->next){
		fast= fast->next->next;
		slow= slow->next;
	}
	
	cout <<"Middlent of the list is " << slow->data << "\n";
}
node *reverse(node *head){
	node *prev=NULL, *curr=head, *nxt;
	while(curr){
		nxt= curr->next;
		curr->next= prev;
		prev= curr;
		curr=nxt;
	}
	return prev;
}
int main(){
	node *head=NULL;
	int i=0;
	while(i<6){
		node *tmp=new node;
		tmp->data=i;
		tmp->next=head;
		head=tmp;
		i++;
	}
	traverse(head); cout << "\n";
	findMiddle(head);
	head= reverse(head);
	cout << "After reversing the list \n";
	traverse(head); cout <<"\n";
	return 0;
}