//average of n numbers using pointers
#include <stdio.h>
int   main()
{
    int n;
    printf("Enter number of elements in the array:"); scanf("%d",&n);
    int arr[n];
    int *ptr;
    for (int i=0;i<n;i++)
    {
        int element; 
        printf("Enter element:"); scanf("%d",&element);
        arr[i] = element;
        ptr=ptr+1;
    }
    int sum = 0;
    float avg;
    ptr = arr;
    for(int i=0;i<n;i++)
    {
        sum+=(*ptr);
        ptr=ptr+1;
    }
    avg = (float)sum/n;
    printf("Sum of the given numbers:%d",sum);
    printf("\nAverage of the given numbers:%.2f",avg);
}
