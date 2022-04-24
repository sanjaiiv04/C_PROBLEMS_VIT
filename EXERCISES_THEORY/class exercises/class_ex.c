//program to print a new number by adding 1 to each digit
#include <stdio.h>
int main()
{
    int n,number,cnt=0,sum;
    printf("Enter n:"); scanf("%d",&n);
    number=n;
    while (n>0)
    {
        n=n/10;
        cnt++;
    }
    for (int i=0;i<cnt;i++)
    {
        n=n*10;
        n++;
    }
    sum=number + n;
    printf("Increasing the digits by 1:%d",sum);
    
}
