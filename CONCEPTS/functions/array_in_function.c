
#include <stdio.h>
int func(int *x);
int main()
{
    int arr[5]={1,2,3,4,5};
    func(arr);
}

int func(int *x)
{
    for (int i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}







