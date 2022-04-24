//program to print largest and fourth largest element in an array
//register no:21BRS1021
#include <stdio.h>
int main()
{
    //array creation by user
    int a;
    printf("enter no of elements in an array:");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        int n;
        printf("Enter element:");
        scanf("%d",&n);
        arr[i]=n;
    }
    //sorting
    int temp;
    for (int i=0;i<a;i++)
    {
        for (int j=i+1;j<a;j++)
        {
            if (arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        
            }
        }

    }
    printf("\nlargest element in the array:%d",arr[0]);
    printf("\nfourth largest element in the array:%d",arr[3]);
}
