#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0) printf("Weird");
	else{
		if(n>=2 && n<=5) printf("Not Weird");
		else if(n>=6 && n<=20) printf("Weird");
		else printf("Not Weird");
	}
	return 0;
}
/*
This problem will test your knowledge on "if-else" statements.

Given an integer N as input, check the following:

    If N is odd, print "Weird".
    If N is even and, in between the range of 2 and 5(inclusive), print "Not Weird".
    If N is even and, in between the range of 6 and 20(inclusive), print "Weird".
    If N is even and N>20, print "Not Weird".

We have given you partially completed code in the editor, complete it to solve the problem.

Input Format

There is a single line of input: integer N.

Constraints
1=N=100

Output Format

Print "Weird" if the number is weird. Otherwise, print "Not Weird". Do not print the quotation marks.
*/
