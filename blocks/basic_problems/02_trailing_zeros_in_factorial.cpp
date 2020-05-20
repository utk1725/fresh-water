#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int divide = 5, zeros=0;
    int curr_zeros = n/divide;
    while(curr_zeros){
        zeros = zeros + curr_zeros;
        divide = divide*5;
        curr_zeros = n/divide;
    }
    printf("%d\n", zeros);
    return 0;
}
