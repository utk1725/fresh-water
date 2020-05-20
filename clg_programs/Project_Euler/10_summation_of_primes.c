#include<stdio.h>
#include<math.h>
int main(){
	long long int primes[120032],nxt=31,i,j,k,flag;
	primes[0]=0;primes[1]=2;primes[2]=3;primes[3]=5;primes[4]=7;primes[5]=11;primes[6]=13;primes[7]=17;primes[8]=19;primes[9]=23;primes[10]=29;
	for(i=11;i<120032;i++){
		for(j=nxt;;j++){
			flag=0;
			if(j%2==0) continue;
			for(k=3;k<=sqrt(j);k++){
				if(j%k==0){
					flag=1;break;
				}
			}
			if(flag==0){
				primes[i]=j;
				nxt=j+1;
				break;
			}
		}
	}
	long long int t,number;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&number);
		long long int x = 0,sum=0;
		while(number>=primes[x]){
			sum = sum+primes[x];x++;
		}
		printf("%lld\n",sum);
	}
}
/*
#include <iostream>
#include<vector>
using namespace std;
long long int prime(long long int);
int main()
{
   long long int tc,N;
    unsigned long long int sum=0;
   cin>>tc;
   vector <long long int>v;
    long long int arr[1000000] = {0},i,j;
    for (i = 2; i < 1000000; i++)
    {
        for ( j = i * i; j < 1000000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 1000000; i++)
    {
        if (arr[i - 1] == 0)
            v.push_back(i);
    }
   while(tc--)
   {
       cin>>N;
       i=1;
       while(v.at(i)<=N)
       {
           sum+=v.at(i);
           i++;
       }
       cout<<sum<<"\n";
       sum=0;
   }
   return 0;
}
*/
