#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;
    int min=arr[0]; int max=arr[0];
    for (int i=0;i<10;i++)
    {
        if (*ptr+i>max) max = *ptr+i;
        else if (*ptr+i<min) min = *ptr+i;
    }
    printf("Max:%d,Min:%d",max,min);

}