#include <stdio.h>

int main()
{
    int n=10;
    int *p = &n;
    printf("\nthe address of n:%p",p);
    printf("\nthe value of n:%d",*p);
}
