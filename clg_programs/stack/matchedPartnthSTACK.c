#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define memory (struct node*)malloc(sizeof(struct node*))
int bol_val=0;
struct node{
	char brak;
	struct node *next;
};
char MtchPair(char ch){
	if(ch=='}') return '{';
	else if(ch==')') return '(';
	else return '[';
}
/*
void display(struct node *head){
	struct node *tmp=head;
	while(head){
		printf("%c ->",head->brak);
		head=head->next;
	}
}*/
struct node *push(char ch,struct node *head){
	//printf("\n Here %c came for push operation \n",ch);
	struct node *new=memory;
	new->brak=ch;
	if(head==NULL){
		new->next=NULL;
		head=new;
	}
	else{
		new->next=head;
		head=new;
	}
	return head;
}
struct node *pop(char ch,struct node *head){
	//printf("\n Here %c came for pop operation \n",ch);
	if(head==NULL){
		//printf("\n In POP null condition\n");
		bol_val=1;
		return head;
	}
	else if(ch != head->brak){
		//printf("\n In POP not matched condition\n");
		bol_val=1;
		return head;
	}
	else{
		//printf("\n In POP matched condition\n");
		struct node *tmp=head;
		head=head->next;
		free(tmp);
		return head;
	}
}

int isBalance(char *str,struct node *head){
	bol_val=0;
	//printf("\nString entered into 1st fn it is %s\n",str); //....
	int i,brace_type;
	char mtchd_brc;
	int str_len=strlen(str);
	for(i=0;i<str_len;i++){
		if( str[i]=='(' || str[i]=='[' || str[i]=='{' ) head=push(str[i],head);//display(head);
		else {
			mtchd_brc=MtchPair(str[i]);
			head=pop(mtchd_brc,head);
			//display(head);
			if(bol_val==1) return 0; // here get 1 if it violets the rule
		}
	}
	if(head==NULL) return 1;
	else return 0;
}
int main(){
	struct node *head=NULL;
	int n;
	char str[MAX];
	scanf("%d",&n);
	while(n--){
		scanf("%s",str);
		if(isBalance(str,head)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}