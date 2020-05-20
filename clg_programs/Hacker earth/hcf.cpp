/* C Program to Find Highest Common Factor. */
#include <stdio.h>
int main()
{
    int num1, num2, i, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    for(i=1; i<=num1 || i<=num2; ++i)
    {
        if(num1%i==0 && num2%i==0)   /* Checking whether i is a factor of both number */
            hcf=i;
    }
    printf("H.C.F of %d and %d is %d", num1, num2, hcf);
    return 0;
}
