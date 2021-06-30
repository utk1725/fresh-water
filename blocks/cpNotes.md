* max number we can store using long long int is 10^18
* Initialize vector of sie n with value 5: `vector<int> vect(n,5)`
* cpp map & unordered_map: https://stackoverflow.com/a/3578247/5822768
* <b>for(int element: array)</b>: This is how iterate when you don't need index of array/vector
* adding to above point, when you don't know the type.  for(auto element: array)
* for hashing better to use unordered_set. It internally uses hash map & all operations O(1) on avg. worstcase O(n)
* sort(vec.begin(), vec.end())
* return array like this {ele1, ele2}
* boost::any variable_name; (any datatype is available in c++ using boost library): **#include "boost/any.hpp"**
* convert type any to type int. any_cast<int>(a).... format is any_cast<targetType>(valueWhichNeedsConversion)
* element.type() == typeid(int) --> chck if element type is int or not
* swap is a buildin function in c++. swap(a,b) will swap the values of a & b
* Initialize 2d vector with some value `vector<vector<int>> vec( n , vector<int> (m, 0))`
* In cpp, in recursion or pass by reference to functions while sending send them `function (vec, matrix)` and while receiving use `function(&vec, &matrix)`
* Copy a vector vec1 to another vector vec2. `vector<int> vec2(vec1)` or `vector<int> vec2(vec1.begin(), vec1.end())`
* Sort a 2D vector based on some condition `sort(vec.gebing(), vec.end(), [](vector<int> a, vector<int> b) {return a[0]<b[0]})`
* fastest way to reassign all values of vector to 0/other value `fill(v.begin(), v.end(), 0)`                                                                                                                                 


##### <u>Swap 3 numbers in asc</u>
```
if (a > c)
   swap(a, c);

if (a > b)
   swap(a, b);

//Now the smallest element is the 1st one. Just check the 2nd and 3rd

if (b > c)
   swap(b, c);
 ```
##### <u>Numer of trailing zeros in n!</u>
* Zero will be there if there is 10. But 10 will be present if there is one 2 and one 5 (5*2=10).
* Number of occurrences of 5 always less than occurrences of 2. So, if we are able to count
 number of occurrences of 5 as a factor, upto given number, that is the answer
* for every 5 numbers, one 5 will occur (5,10,15,...). So number of 5's n/5. But numbers like
25, 50, 75, there have 25 in it, which means 5 is there two times. So final formula becomes
* (n/5) + (n/5^2) + (n/5^3) + .... until last calculation becomes zero.


##### <u>Find Set bits in binary number</u>
<b>Approach1:</b><br>
* Let mask=1 Do `ans=ans + (num&mask)`. After this either do num right shift`num>>1` (while 
 n>0) or do left shift of mask `mask<<1`. 
* complexity: O(log n)
 <br>

<b>Approach2:</b><br>
* ```while n>0 {n = n&(n-1); ans++}```
* n&(n-1) removes the number upto last set bit of that number
* complexity: O(number of set bits). But in worst case this also can be O(log n). 
where all bits are 1's

<b>Apprach2:</b>
* builtin popcount
* `int ans = __builtin_popcount(n)`


https://www.youtube.com/watch?v=tL5R9a39p3Q&feature=emb_rel_end <br>

<b>Prime Sieve:</b> 
* If we want to validate prime numbers till N, take array of length N+1
* Initially assume all numbers are prime. Array contains all 1's
* make ar[0] and ar[1] as 0(means not prime)
* Next we have 2, now mark all multiples of 2 as not prime.
* Move to next poistion, which is 3. Check if it is marked or not.
  If it is prime, mark all it's multiples as not prime.
* Next is 4, which is already marked as non-prime. So we will skip it.
* When we are at number we can start mark from `num*num`.  How this is true? 
  all numbers upto range num*num -1, have divisors which are less than num-1. Which we alredy calculated
* We can skipp all even numbers

<b>Euclid's Algorithm to find GCD and LCM</b>
* when a>b: GCD(a,b) = GCD(b, a%b) and GCD(a,0) = a
* ```
  int gcd(int a, int b{
        return b==0? a: gcd(b,a%b); 
   }
* GCD* LCM = a*b
* find LCM by finding GCD

<b>Count Number of sub-arrays whose sum is qual to given number</b>
* We can do this using Pigeonhole principle
* Find the cumulative sum of the given array and construct another array (mod_ary) with sum_ary[index]%num
* now mod_ary contains values only from 0 to num-1 (since all are modulus of num)
* whenever a same mod is repeating in the array, that means from the starting of some mod x
   to another same mod x, exactly total sum num was added. That's why that mod was repeated
* If there are 3 same mods repeated, we can have 3c2 required possible sub-arrays.
* If we arrange buckets for all mods of number num, and this num=size of the array,
according to pigeonhole principle there should be a bucked with count >1

<b>Strings sorting</b>
* use `cin.get()` to consume a white space while passing input.
* c++ string library `#include<cstring>`
* use `getline(cin, strings[string])` to scan strings with white spaces
* string tokenizer function in c++: char `ansString* = strtoke(...)`
* `strtok` function always accepts a character array and returns a character array
* convert string datatype to character array = `char* char_ary = (char*)original_string.c_str()`
* If we want next token from same string, pass first parameter as `NULL` : `char_ary=strtok(NULL, " ")`
* We can compare strings lexicographically  by using comparision operators in c++.
* custom comparison for sort function in cpp 
```
bool numericCompare(pair<string,string> str1, pair<string,string> str2){
    string key1 = str1.second;
    string key2 = str2.second;
    return convertToInt(key1) < convertToInt(key2);
}
```
<b>Sorting Algos</b>
* Selection sort: Find the minimum element in the array and swap it with present index element of the array. Increase 
  the index and repeat the same process
* Bubble sort always pushes largest element to end of the array
* Insertion sort: Always keep present index element into correct position of already sorted array.
  Keep increment the index till end of the array
* Merge sort: Divide the array continuously and merge already sorted arrays
* Pick a pivot and keep the pivot in it's correct position of the array. i.e. This results
  keeping small elements than pivot to pivot left side and larger to right side. Then apply 
  same process to the arrays which are left to pivot and right to pivot continuously.

#####C++ STL inbuilt sort function
* Include header file called `#include<algorithm>`
* sort() function requires a container
* sort an array: `sort(array, array + ary_size)`
* sort elements in decreasing order
```
bool cust_compare(int num1, int num2){
    return num1>num2;
}
sort(array, array + ary_size, cust_compare);
```
* Here we are sending function name as a parameter to another function.
* This is very useful comparing objects, strings etc...
* How to pass a function as a parameter
```
bool cust_compare(int num1, int num2){
    return num1>num2;
}
void bubble_sort(int ar[], int n, bool (&giveany)(int a, int b)){
    for(int outerforlooplogic.....){
        for(int innerforlooplogic...){
            if(
        }
    }   
}
while calling bubble_sort(ary, ary_size, cust_compare);
```
###DP
* Remember the solutions of sub problems which we have already computed
* Where we can apply DP?
  * `Optimal substructure`: We should be able to find smaller problems of 
  the same type
  * `Overlapping subproblems`: There exists subproblem of same. So here, we should not
   count solution for that subproblem again and again.
* DP problems can be solved in two ways. Top-down approach and Bottom-up approach
* Top-down: Recursion + memozation
* Bottom-up: Make a dp array. Fill smallest possible solution (This is exactly what we write in base case
 in recursive approach). Find a way to traverse the dp(solution space). Calculate one solution after other.
 
####Graph Ddata Structures
<b>RealWorld examples</b>
* Google Maps: (V: Landmarks/Cities, E:Roads)
* Social Networking (FB, LinkedIn, Quora, Instagram)
* Circuit Design (V: Resistors, E: Wire)
* Routing Algorithms (V: Routers across the globe, E: Time taken for packets to flow)
* Delivery Route for Vans (V: Routers across the globe, E: Roads)
* Resolving Dependencies (V: API Calls.Software Installations, E: Dependencies between Tasks)
* Graphs in Deep Learning (V: Neurons, E: Connection between them)
* Web Document (DOM Tree) (V: Dom Elements, E: Connections)
* Image Processing & Segmentation
* Paint Bucket Tool/Connected Components (V: Pixels, E: Connections between Neighbouring pixels of same value)

<b> Different ways to store Graph DataStructure</b>

* <u>Adjacency Matrix</u>: 2D array of edges X edges matrix
  * We can find edge between two vertex in O(1) time
  * But even graph is small, we should use full memory
  * Easy to find Neighbours. O(N) time
* <u>Edge List</u>: `V={0,1,2,3} E=[(0,1)(0,2)(1,2)(2,1)(2,3)(3,2)]`
* <u>Adjaceny List</u>: Vertex number and store all neighbours of that vertex in a List. We can use a HashMap of 
Vertex as key and List of nodes as value.
```
0 -> 1,2
1 -> 2
2 -> 1,3
3 -> 2
```
* We can find neighburs in O(neighbours) time
* Effecient in memory
* <u>Implicit Graph</u>: 2D array of 0's and 1's. 
<b>Graph Traversal </b>
* BFS: 
  * Iterative approach.
  * Start from a node and try to reach it's neighbours of that node. 
  * Since we need to go multiple neighbours of same node, we store
   those nodes in data structures like queue. 
  * This is same as level order traversal of tree.
  * Whenever we put node in the queue, we mark that node as visited.
  
* DFS: Recursive approach

<b>CP</b>
###### Setup sublime text:
* Keep cpp, input.txt, output.txt file in same directory
* Use layout, group options in view tab to make required arrangement of files
* Use ctrl+shift+B to compile and run. Use ctrl+B to run again
* Install formatter pacakge from tools->command palatte.
* Install `SublimeAStyleFormatter`
```
ctrl+alt+f: Format current file
ctrl+k, ctrl+f: Format current selection
ctrl+x: Cut the current line
ctrl+D: repeat the same line
ctrl+D when clicked on a word, rename that word
ctrl+ / : comment/uncomment
 ```
* pdbs is also set type of data structure. It has to extra functions.
  * pdbs_set.order_of_key(element) gives index of the element in sorted order
  * (*pdbs_set.find_by_order(element)) gives 
  * If element is not present, it assumes and gives the index if that element
   is present in the pdbs
   
