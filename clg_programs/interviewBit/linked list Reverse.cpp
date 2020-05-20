#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *insert(node *head,int ele){
	node *newNode= new node;
	newNode->next=NULL;
	newNode->data=ele;
	if(!head) return newNode;
	node *tmp=head;
	while(tmp->next) tmp= tmp->next;
	tmp->next=newNode;
	return head;
}
void printList(node *head){
	while(head){
		cout << head->data << " " ;
		head=head->next;
	}
	cout << "\n";
}
node* getIntersectionNode(node* A, node* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    node *dupA=A, *dupB=B;
    while(dupA->next) dupA= dupA->next;
    while(dupB->next){
        if(dupB==dupA) return dupB;
        dupB= dupB->next;
    }
    dupA=A; dupB=B;
    while(dupB->next) dupB=dupB->next;
    while(dupA->next){
        if(dupA==dupB) return dupA;
        dupA=dupA->next;
    }
    return NULL;
}
int main(){
	node *head1=NULL,head2=NULL;
	int ele;
	while(1){
		cin>>ele;
		if(!ele) break;
		head1=insert(head1,ele);
	}
	while(1){
		cin>>ele;
		if(!ele) break;
		head2=insert(head2,ele);
	}
	//cout << "Linked list is \n";
	//printList(head);
	//cout << "Reversing list \n";
	node *ans= getIntersectionNode(head1,head2);
//	head= reverseList(head);
	return 0;
}