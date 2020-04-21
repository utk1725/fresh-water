* max number we can store using long long int is 10^18
##### <u>Numer of trailing zeros in n!</u>
* Zero will be there if there is 10. But 10 will be present if there is one 2 and one 5 (5*2=10).
* Number of occurrences of 5 always less than occurrences of 2. So, if we are able to count
 number of occurrences of 5 as a factor, upto given number, that is the answer
* for every 5 numbers, one 5 will occur (5,10,15,...). So number of 5's n/5. But numbers like
25, 50, 75, there have 25 in it, which means 5 is there two times. So final formula becomes
* (n/5) + (n/5^2) + (n/5^3) + .... until last calculation becomes zero.

