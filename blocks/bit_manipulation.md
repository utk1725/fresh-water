* n & (n-1) turns off the rightmost set bit

* Count the number of set bits in a number
   * Sol1: while n != 0, do n & (n-1) and count how many times we do it. Since n & (n-1) turns off the right most set bit, every time this swallows one set bit.
   * Sol2: Every time divide with 2 and do %2 and count if %2 is giving 1 nor not.
   * 

* Check if the kth bit is set or not:
    * Form another number which has 1 at kth position and do and operation. To get number which has set bit only at kth position, do k times left shift operation for 1.
    * `n & (1<<k) should be non-zero`
 
* Turn off the kth bit
    * For this we need a number which has zero at kth position and remaining all 1s. If we do and operation with it, we turn off the kth bit.
    * How to get a number which has zero at kth postion and remaing all 1s?
        * First get a number which is kth set bit by doing k left shift operations
        * Then do the 1's complement of it. Which sets that 1 to zero and remaining all zeros to one.
        * `n & ~(n <<< k)`
     
* Set the kth bit of a number
   * k left shift operations is a number x. Then do x or n
   * `n | (1<<<k)`
 
* Toggle the keth bit
    *  `n ^ (1<<k)`

* Check if the number is a power of 2
   * Sol 1: Count the number of set bits if it is > 1 it's not power of 2. Becuase in 2 power, there will be only one set bit
   * Sol 2: n & (n-1) turns the right most set bit off. So if we do n & (n-1), we should get zero. Because there is only one set bit. Coner case is, if n is zero, it gives ans zero. Therefore we need to handle n==0 case separately or else we can do n && (!(n-1)) as well
   * ` n && (!(n-))`

* Check if the number is a power of 4
   * There must be only one set bit and that one set bit is at odd position.
   * So, we need to check how many set bits there are, and also the position of that by keep right shifting the number till we get zero and count how many times we did it.
   * Approach 2: while (n%4 == 0) n = n/4; -> this will be only true if n exactly = 1. Then only odd position 1 will get to end. Otherwise if n is not power of 4 or set postion is not at odd then n%4 == 0 we get even before reaching 1.


* Find a next higher number that is higher than the given number and it is the power of 2
    * Find the most significant set bit and count in which position it is set. Now generate a number which has 1 at next postion to it.
    * while n!=0 n=n>>>1 => This gives in which position 1 is set (most significant) because right sift to 1 means each time 1 bit will go away. Now Prepare a number left shift these many times 1 <<< (x+1)
    * `while n !=0 -> n>>=1, count+=1` then ans = `1<<count`
 

* Multiply a number with 7 without using the multiplication operation.
   *  n << k = n * 2 power k
   *  So do n <<< 3 which is `n` multiplied by 8 (2 power 3).
   *  Now subtract n from the above answer => 8b-n = 7n
 
* For 1 to n numbers, count how many set bits a number has.
   * If we add zero at the end of the binary representation it is equal to n*2
   * If we add one at the end of the binary representation is equal to N*2 + 1
   *  This means, if we want to know number of set bits in n -> it is equal to number of set bits in n/2 + n%2
   *  `int [] ans = new int[n+1]` ans[0]=0; then `for i=0 to n, ans[i]= ans[i/2]+i%2`
 
