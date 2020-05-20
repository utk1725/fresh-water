#include<iostream>

using namespace std;

void prime_seieve(int *primes){
    for(int num=3;num<=1000000;num+=2)
        primes[num]=1;
    for(long long int num=3; num<=1000000;num+=2){
        if(primes[num]){
            // if this num is prime, mark all it's multiples as non-prime
            for(long long int multiples=num*num; multiples<=1000000; multiples+=num)
                primes[multiples] = 0;
        }
    }
    primes[2] = 1;
}
int main(){
    int primes[1000005] = {};
    prime_seieve(primes);
    int prime_count[1000005] = {};
    for(int index=1;index<=1000000;index++)
        prime_count[index] = prime_count[index-1] + primes[index];
    int test_cases, from, to;
    scanf("%d", &test_cases);
    while(test_cases--){
        scanf("%d%d",&from, &to);
        printf("%d\n",prime_count[to]-prime_count[from-1]);
    }
    return 0;
}

//bool isPrime(int num){
//    if(num==1) return false;
//    for(int fact=3; fact*fact <=num; fact++)
//        if(num%fact==0) return false;
//     return true;
//}
