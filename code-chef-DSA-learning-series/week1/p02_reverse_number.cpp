#include <iostream>
using namespace std;

int reverse_number(int num){
    // not handling negative case numbers
    int rev_num = 0;
    while(num){
        rev_num = (rev_num*10) + (num%10);
        num = num/10;
    }
    return rev_num;
}
int main(){
    int t_case, num;
    scanf("%d", &t_case);
    while(t_case--){
        scanf("%d", &num);
        int rev_num = reverse_number(num);
        printf("%d\n", rev_num);
    }
    return 0;
}