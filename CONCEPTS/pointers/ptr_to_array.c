#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *pointer;
    pointer = arr;
    printf("\nThe pointer is pointing to:%d",*pointer);
    /* it is clear that when you assign array to a pointer it points to the
    first element of the array and that pointer can be used for indexing */
    printf("\nusing pointer arithmetics the value at 3rd index:%d",*pointer+3);

}