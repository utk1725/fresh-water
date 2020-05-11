#include <iostream>
#include <cstring>
#define lli long long int
using namespace std;

int main(){
    int test_cases, array_size;
    int array[100001];
    lli ary_value;
    scanf("%d",&test_cases);
    while(test_cases--){
        memset(array, 0, sizeof(array));
        scanf("%d", &array_size);
        array[0] = 1;
        lli sum = 0;
        for(int element=1; element<=array_size; element++){
            scanf("%lld", &ary_value);
            sum+=ary_value;
			sum = sum%array_size;
            sum = (sum+array_size)%array_size;
            array[sum]++;
        }
        lli ans = 0;
        for(int index=0; index<array_size; index++){
            lli mod_count = array[index];
            ans = ans+ (mod_count*(mod_count-1)/2);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
