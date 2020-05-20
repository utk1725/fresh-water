#include<iostream>

using namespace std;

int find_gcd(int num1, int num2){
    return num2==0?num1:find_gcd(num2, num1%num2);
}
int main(){
    int num1, num2;
    scanf("%d%d", &num1,&num2);
    int gcd = find_gcd(num1, num2);
    printf("%d\n",gcd);
    return 0;
}