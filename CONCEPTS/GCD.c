#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a:"); scanf("%d",&a);
    printf("Enter b:"); scanf("%d",&b);
    int dividend=a; int divisor=b;
    int rem=a/b;
    while (rem!=0)
    {
        dividend = divisor;
        divisor = rem;
        rem = dividend/divisor;
    }
    printf("GCD of %d and %d:%d",a,b,divisor);
}