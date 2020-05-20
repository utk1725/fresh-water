#include<stdio.h>
int main(){
	struct ex{
		int x;char y;
	};
	struct ex a,b,c;
	a.x=5;a.y='a';
	return 0;
}
/*
Structures
to store different types of datatypes
int n is to declare intiger datatype like this also
struct{
	int i;
	char c;
} // this is the declaration of structure 
if we write int x,y,z.. there will be 3 intigers created..like that by the below code
struct{
	int x;char c; }x,y,z; //here also 3 structures created
now we can access anyone by "member operator"(useed to connection btwn structure name and structure member.
ex: x.i=10;x.c='a';.like that
 				or      
	struct ex{ //here ex is tag(optional) to reference this structure
	int i;char c;
	}; // this is blueprint ..actually no memory will be allocated.
	struct ex x,y,zl;//this is also correct.
	initializing...struct ex x ={1,'a'};
...................structure inside another structure......
struct ex1{
	strucu ex a;//here a is another structure. 
	struct ex b;
	}//
	struct ex1 t;
	accessing... t.a.i=10;t.a.c='a';
*/
