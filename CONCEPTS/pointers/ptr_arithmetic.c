//pointer arithmetic
#include <stdio.h>
int main()
{
    int n=20,a=10;
    int *ptr; int *ptr2;
    ptr = &n;
    ptr2 = &a;
    printf("\nAddress of the pointer-1:%p",ptr);
    ptr++; //pointer incrementation
    printf("\nAddress of pointer after increment:%p",ptr);
    ptr--; //pointer decrementation
    printf("\nAddress of pointer after decrement:%p",ptr);
    ptr=ptr+6;//pointer addition
    printf("\nAddress of pointer after addition:%p",ptr);
    ptr=ptr-4;//pointer substraction
    printf("\nAddress of pointer after substraction:%p",ptr);
    printf("\nAddress of pointer-2:%p",ptr2);
    if (ptr>ptr2) printf("\n%p",ptr); //pointer comparison
    else printf("\n%p",ptr2);
    
}


