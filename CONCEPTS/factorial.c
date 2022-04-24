#include <stdio.h>
int fact(int a);
int main()
{
    int x;
    printf("Enter value:"); scanf("%d",&x);
    printf("Factorial of %d is:%d",x,fact(x));
}
int fact(int a)
{
    if (a==1) return 1;
    else return a*fact(a-1);
}
