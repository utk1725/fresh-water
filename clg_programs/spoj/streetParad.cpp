#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node*))
struct node{
	int data;
	struct node *next;
};
struct node *head= NULL;
class stackOper{
	public:
		void push(int n){
			struct node *newnode;
			newnode= memory;
			newnode->data=n;
			newnode->next=NULL;
			if(head==NULL) head=newnode;
			else{
				struct node *t=head;
				while(t->next) t=t->next;
				t->next= newnode;
			}
		}
		void pop(){
			if(head->next==NULL){
				free(head);
				head=NULL;
			}
			else{
				struct node *t=head;
				while(t->next->next) t=t->next;
				free(t->next);
				t->next=NULL;
			}
		}
		int top(){
			if (head==NULL) return -1;
			else{
				struct node *t=head;
				while(t->next) t=t->next;
				return t->data;
			}
		}
};
int main(){
	stackOper stk;
	int n, nextneed;
	while(1){
	scanf("%d",&n);
	if(n==0) break;
	// this is because in question given that input end if 0 entered
	
	int ar[n];
	for (int i=0;i<n;i++) scanf("%d",&ar[i]);
	// reading giving order 
	
	nextneed=1; // this represents what is the next car number we shoudl put in line
	for(int i=0;i<n;i++){
		if(nextneed==ar[i]) nextneed++; // if directly available in given order put in line
		else if(nextneed==stk.top()){ // if avaliable at top of the stack(side street first car take into order)
			nextneed++;
			i--;
			stk.pop();
		}
		else stk.push(ar[i]); // if it no need send to side streed(pushing into stack)
	}
	while(head!=NULL){ // after taking from original positin check whether top of the stack may be next one..this continues check....
		if(stk.top()==nextneed) {
			stk.pop();
			nextneed++;
		}
		else break; // since they are in side street after taking from original positon, if u wont find it at top then directly say no
	}
	
	if(head==NULL) printf("yes\n"); // if no car in side street then say yes
	else printf("no\n");
	}
	return 0;
}