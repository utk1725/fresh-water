#include <bits/stdc++.h>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
};
ListNode *createList(ListNode *A, int ele){
	ListNode *tmp= new ListNode;
	tmp->val=ele; tmp->next=NULL;
	if(!A) return tmp;
	tmp->next= A;
	return tmp;
}
void printList(ListNode *A){
	while(A){
		cout << A->val;
		A=A->next;
	}
	cout << "\n";
}
ListNode *reverse(ListNode *A){
	ListNode *prev=NULL, *curr=A, *nxt;
	while(curr){
		nxt= curr->next;
		curr->next= prev;
		prev= curr;
		curr= nxt;
	}
	return prev;
}
ListNode *AddLinkedLists(ListNode *A,ListNode *B){
	ListNode *ans=NULL;
	// A= reverse(A);
	 //B= reverse(B);
	int sm, carry=0;
	while(A and B){
		ListNode *tmp= new ListNode;
		sm= A->val + B->val + carry;
		tmp->val= sm%10; tmp->next=NULL;
		carry= sm/10;
		if(!ans) ans=tmp;
		else {tmp->next=ans; ans=tmp;}
		A=A->next; B=B->next;
	}
	if(!A) A=B;
	while(A){
		ListNode *tmp= new ListNode;
		sm= A->val + carry;
		tmp->val= sm%10; carry= sm/10;
		tmp->next=ans; ans=tmp;
		A=A->next;
	}
	if(carry){
		ListNode *tmp= new ListNode;
		tmp->val= carry; tmp->next=ans; ans=tmp;
	}
	ans= reverse(ans);
	return ans;
}
int main(){
	int ele=1;
	ListNode *A=NULL,*B=NULL;
	while(ele){
		cin >> ele;
		A= createList(A,ele);
	}ele=1;
	while(ele){
		cin>>ele;
		B=createList(B,ele);
	}
	printList(A); printList(B);
	ListNode *sum= AddLinkedLists(A->next, B->next);
	printList(sum);
	return 0;
}