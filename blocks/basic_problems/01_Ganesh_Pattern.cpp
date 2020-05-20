#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for(int line=1; line<=n/2; line++){
        printf("*");
        for(int space=1; space<n/2; space++) printf(" ");
        printf("*");
        if(line==1) for(int star=1; star<=n/2; star++) printf("*");
        printf("\n");
    }
    for(int middle=1; middle<=n; middle++) printf("*");
    printf("\n");
    for(int line=1; line<=n/2; line++){
        for(int space=1; space<=n/2; space++){
           if(line==n/2) printf("*");
           else printf(" ");
        }
        printf("*");
        for(int space=1; space<n/2; space++) printf(" ");
        printf("*");
        printf("\n");
    }
    return 0;
}