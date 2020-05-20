#include<stdio.h>
int main(){
	int d,m,y,d1,m1,y1;
	scanf("%d %d %d",&d1,&m1,&y1);
	scanf("%d %d %d",&d,&m,&y);
	if(y1>y) printf("1000");
	else if(m1>m) printf("%d",(m1-m)*500);
	else if(d1>d) printf("%d",(d1-d)*15);
	else printf("0");
	return 0;
}
/*


    Domains
    Contests
    Rank
    Leaderboard
    Companies BETA

    phani653

The email address you signed up with has not been verified. You won't be ranked on the leaderboard until you verify your account.

Re-send the verification email
×
All Domains Algorithms Warmup Library Fine
Library Fine
by vatsalchanana

    Problem
    Submissions
    Leaderboard
    Discussions
    Editorial

Problem Statement

The Head Librarian at a library wants you to make a program that calculates the fine for returning the book after the return date. You are given the actual and the expected return dates. Calculate the fine as follows:

    If the book is returned on or before the expected return date, no fine will be charged, in other words fine is 0.
    If the book is returned in the same calendar month as the expected return date, Fine = 15 Hackos × Number of late days
    If the book is not returned in the same calendar month but in the same calendar year as the expected return date, Fine = 500 Hackos × Number of late months
    If the book is not returned in the same calendar year, the fine is fixed at 10000 Hackos.

Input Format

You are given the actual and the expected return dates in D M Y format respectively. There are two lines of input. The first line contains
 the D M Y values for the actual return date and the next line contains the D M Y values for the expected return date.

Constraints
1?D?31
1?M?12
1?Y?3000

Output Format

Output a single value equal to the fine.

Sample Input

9 6 2015
6 6 2015

Sample Output

45

Explanation

Since the actual date is 3 days later than expected, fine is calculated as 15×3=45 Hackos.

*/
