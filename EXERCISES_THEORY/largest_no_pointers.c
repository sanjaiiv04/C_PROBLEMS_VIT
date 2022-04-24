//find the largest number out of 3 given numbers using pointers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a:"); scanf("%d",&a);
    printf("Enter b:"); scanf("%d",&b);
    printf("Enter c:"); scanf("%d",&c);
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    if ((*p1 > *p2) && (*p1 > *p3)) printf("Largest number is:%d",*p1);
    else if ((*p2 > *p3) && (*p2 > *p1)) printf("Largest number is:%d",*p2);
    else printf("Largest number is:%d",*p3);

}
