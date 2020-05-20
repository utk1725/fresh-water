#include <stdio.h>
int main(){
    int arr_i,n; 
    scanf("%d",&n);
    //int *arr = malloc(sizeof(int) * n);
    int arr[n];
    for(arr_i = 0; arr_i < n; arr_i++) scanf("%d",&arr[arr_i]);
    while(arr_i--) printf("%d ",arr[arr_i]);
    return 0;
}
