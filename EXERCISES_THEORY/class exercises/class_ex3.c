//sum of first and last digit of a number
#include <stdio.h>
int main()
{
    int arr[4],a,b,c,n;
    printf("Enter n:"); scanf("%d",&n);
    a = n/1000;
    c = a/10; // ex: 1234/1000 will be 1 because int/int will be int i.e the decimals will be truncated
    b = n%10; // ex: 1234%10 will be 4 because 1234%10 gives remainder 4
    printf("%d",b+c);
}
