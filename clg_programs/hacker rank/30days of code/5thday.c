#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,n,a,b,I;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&n);
        for(I=0;I<n;I++){
                int p = pow(2,I)-1;
                p*=2;
                p+=1;
                p*=b;
                p+=a;
                printf("%d ",p);
		}printf("\n");
    }
    return 0;
}

