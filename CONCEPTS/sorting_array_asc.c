#include <stdio.h>
int main()
{
    int arr[5]={1,5,4,3,2};
    int temp;
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i=0;i<5;i++) printf("%d",arr[i]);
}