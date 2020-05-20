#include<stdio.h>
int main(){
	struct node{
		int i;
		int *c;
	};
	struct node a[2],*p;//here a has two elements each member is a structure
	int b[2]={30,40};
	p=&a[0];
	a[0].i=10;a[1].i=20;
	a[0].c=b;
	return 0;
}
/*
struct node{
	int i;int j;
	};
struct ndde a,*p;//here a is a structure of type node. and p is a pointer which points to a structure
p=&a;///address of a will be stored in p
a.i is accessing i AND *p.i is wrong (*p).i is correct one
instead of this thing we can use this p->i
when a structured copied to a function entire structure will be copied
strucu node fun(strcut node n1,struct node n2);//it is returning a structure of type node.
so if we want to send a structure send a pointer.
		Self referential structures
		The reference inside the structure is pointing to the same structure called self referentail structure.
		Useful in linked lists and trees and graphs.
		When one element is pointing to other element in linked list, both elements are belongs structures of same type
Allocating memory dynamically
		static allocation and dynamic allocation
stack is used for function calling..for each function call activation record will pus
whenever u create a memory whose size is not known at compile time s whenever we need it we can ask for some space and then we create it in heap
we can directly manage is teh heap or we can write
so inroder to manage memory space, to avoid unnecesary space, wehenever u need it u have to ask for spacce.
sbrk(n) is the system call which is with an argument, by allocating n number of bytes.
Each operating system has different memory allocating call functions, so c provides a library function malloc which asks the particular operating
sustem to allocate memory
malloc is a function which is defined in c library like this
void* malloc (int) means we can call malloc takes nof of bytes as argument and return a pointer to its address
sizeof is an operator to know size of operator
so int* p= (int*)malloc(sizeof(int));
if we dont need moemory free(p);
malloc will take some extra memory and it will chuck and chop itgive sapace to u
so everytime there is remaining space called hole
malloc is not contiguously
*/
