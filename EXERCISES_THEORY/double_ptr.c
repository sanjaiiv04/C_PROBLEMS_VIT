//printing elements of array using double pointer
#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    int **dptr;
    ptr = arr;
    dptr = &ptr;
    for (int i=0;i<10;i++) 
    {
        int element;
        printf("Enter element:"); scanf("%d",&element);
        arr[i] = element;
    }
    for (int i=0;i<10;i++)
    {
        printf("\nAddress of element-%d at pointer:%p , at pointer to pointer:%p",**dptr+i,ptr+i,dptr+i);
    }
}
