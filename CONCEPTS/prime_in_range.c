#include <stdio.h>
int prime(int);
int main()
{
    int a,b;
    printf("Enter lower limit:"); scanf("%d",&a);
    printf("Enter upper limit:"); scanf("%d",&b);
    int arr[b-a];
    for (int i=a;i<b;i++)
    {
        if (prime(i)) 
        {
            arr[i]=i;
        }
    }
    printf("%d %d",arr[0],arr[b-a-1]);

}
int prime(int a)
{
    if (a<2) return 0;
    else 
    {
        for (int i=2;i<=a/2;i++)
        {
            if (a%i==0) return 0;
        }
    }
    return 1;
}