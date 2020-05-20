/*pk*/
/*queue using linked list*/

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

struct queue{
	struct node *front, *rear;
};

class qclass{
	public:
		struct queue *createQ(){
			struct queue *q= (struct queue*)malloc(sizeof(struct queue));
			q->front= q->rear= NULL;
			return q;
		}
		void enQ(struct queue *q, int num){
			struct node *newnode=(struct node*)malloc(sizeof(struct node));
			newnode->data= num;
			newnode->next= NULL;
			if(!q->rear){
				q->rear= newnode;
				if(!q->front) q->front= newnode;
			}
			else{
				q->rear->next= newnode;
				q->rear= newnode;
			}
		}
		void deQ(struct queue *q){
			if(q->front){
				struct node *tmp= q->front;
				q->front= q->front->next;
				
				if(q->front==NULL) q->rear= NULL; // if front is null then rear also null
				
				free(tmp);
			}
			else cout <<"Q is empty"<< endl;
		}
		void display(struct queue *q){
			struct node *tmp= q->front;
			if(!tmp) cout<< "Q is empty" << endl;
			while(tmp){
				cout << tmp->data << " ";
				tmp= tmp->next;
			}
		}
};

int main(){
	qclass qc;
	struct queue *q= qc.createQ();
	int ch, num;
	while(1){
		cout << endl<< "1.enQ 2.deQ 3.display 4.exit"<< endl;
		cin >>  ch;
		switch(ch){
			default:
				case 1:
					cin>> num;
					qc.enQ(q,num);
					break;
				case 2:
					qc.deQ(q);
					break;
				case 3:
					qc.display(q);
					break;
				case 4:
					exit(0);
				cout << "enter valid input" << endl;
		}
	}
	return 0;
}