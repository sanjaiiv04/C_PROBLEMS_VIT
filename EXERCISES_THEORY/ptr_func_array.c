//smallest element in the array using pointers and functions
#include <stdio.h>
int size;
int min_element(int *x);
int main()
{
    printf("Enter the number of elements:");
    scanf("%d",&size);
    int arr[size];
    int *ptr;
    int (*fptr)();
    int res;
    for (int i=0;i<size;i++)
    {
        int element;
        printf("Enter element:"); scanf("%d",&element);
        arr[i] = element;
    }
    ptr = arr;
    fptr = &min_element;
    res = (*fptr)(arr);
    printf("Smallest element in the array:%d",res);
}
int min_element(int *x)
{
    int min = *x;
    for (int i=0;i<size;i++)
    {
        if (*(x+i) < min) min = *(x+i);
    }
    return min;
}
