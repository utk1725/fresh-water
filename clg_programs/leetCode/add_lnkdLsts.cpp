//https://leetcode.com/problems/add-two-numbers/description/
#include<iostream>
#include<stdio.h>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
	//ListNode(int x): val(x), next(NULL) {}
};
ListNode *insert(ListNode *head,int ele){
	ListNode *newNode= new ListNode;
	newNode->val= ele;
	newNode->next=NULL;
	if(head) newNode->next= head;
	return newNode;
}
void print(ListNode *head){
	while(head){
		cout << head->val << " ";
		head=head->next;
	}
	cout << "\n";
}
int getNumber(ListNode *l1,int tmp){
	if (l1->next) getNumber(l1->next,0);
	return 
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
	int first= getNumber(l1,0);
	
}
int main(){
	ListNode *head1= new ListNode;
	ListNode *head2= new ListNode;
	head1=head2=NULL;
	int n,ele;
	for(int i=1;i<3;i++){
		cout << "Insert elements into list" << i<< endl;
		cout << "How many elements want to insert" << endl;
		cin >> n;
		while(n--){
			cin >> ele;
			if(i==1) head1= insert(head1,ele);
			else head2= insert(head2,ele);
		}
	}
	print(head1);print(head2);
	return 0;
}