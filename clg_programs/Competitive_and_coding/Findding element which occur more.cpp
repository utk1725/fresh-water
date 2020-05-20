/*
Question: Finding element which occur most
Method1: Chechking each element and updating count. O(n2)
Method2: Using sorting. O(n log n)
Method3: Using hashing O(n) and O(n)
Method4: If elements are between 0 and n-1. Then
		negate the value at that index. Finally take which has_denorm
		minimum value(more times negated).
		
		BUT THIS IS WRONG. BECAUSE IF ONCE VALUE INCREASED
		UNABLE TO PROCESS REMAINING ELEMENTS.
		
		so this time. whenever element found ADD N at 
		that position. 
		so when checking check A[i]/n .
		when finally counting take index that which has max of A[i]/n.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	return 0;
}