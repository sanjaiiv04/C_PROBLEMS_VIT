//swap numbers using pointers without temp variable
//register no:21BRS1021
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter x:"); scanf("%d",&x);
    printf("Enter y:"); scanf("%d",&y);
    int *a,*b;
    printf("Before swapping a=%d b=%d",x,y);
    a=&x; b=&y;
    *a=*a + *b;
    *b=*a - *b;
    *a=*a - *b;
    printf("\nAfter swapping a=%d b=%d",x,y);

}

