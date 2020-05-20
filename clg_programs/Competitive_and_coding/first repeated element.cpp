/*
Q: Finding first repeated element in array
	Example: [3,2,1,2,2,3]
	Ans is 3. That means element occured first time and repeated again
	
thinking....
sorting will fail.... because index positions will gone
Brute Force will work: But O(n2) solution.

Assuming elements 0 to n-1 and if we use negating method....
NO we cant use this one. no use of this.. 


hashing also fail..dont know which is first occured and repeated
BUT
a special kind of hashing will work that,
instead of number, in hash table, store index position of the number
when we got releated element just negate that value.

In this case, the values which are repeated only negated
and the value on order index base, which is small. that is 
highest negative value. That hash index is answer.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	return 0;
}