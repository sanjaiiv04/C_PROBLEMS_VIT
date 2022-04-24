//function to find the prime factors of a number
#include <stdio.h>
void prime(int);
int main()
{
    int x;
    printf("Enter number:"); scanf("%d",&x);
    prime(x);
}
void prime(int n)
{
    int flag;
    for (int i=2;i<=n;i++)
    {
        if (n%i==0)
        {
            flag=1;
            for(int j=2;j<=i/2;j++)
            {
                if (i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if (flag==1) printf("%d ",i);
        }
    }
}