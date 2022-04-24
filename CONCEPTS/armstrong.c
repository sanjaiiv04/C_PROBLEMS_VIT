#include <stdio.h>
#include <math.h>
int main()
{
    int n=371,sum=0;
    int number = n;
    while (n>0)
    {
        int rem = n%10;
        n=n/10;
        sum = sum + pow(rem,3);
        
    }
    printf("%d",sum);printf("\n");
    if (sum==number) printf("Armstrong number");
    else printf("Not an armstrong number");
}