//call by reference
#include <stdio.h>
void change(int *n);
int main()
{
    int a=100;
    printf("\nbefore function call:%d",a);
    change(&a);
    printf("\nafter function call:%d",a);
}

void change(int *n)
{
    printf("\ninside function before changes:%d",*n);
    *n=*n+10;
    printf("\ninside function after change:%d",*n);
}