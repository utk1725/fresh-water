#include<iostream>
using namespace std;

int main(){
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int no_of_set_bits = 0;
        while (n>0){
            n = n&(n-1);
            no_of_set_bits++;
        }
        printf("%d\n", no_of_set_bits);
    }
    return 0;
}
