#include <stdio.h>
int main()
{
    int a=12,b=25,max;
    max=(a>b)?a:b;
    for (;;)
    {
        if(max%a==0 && max%b==0)
        {
            printf("LCM of %d and %d:%d",a,b,max);
            break;
        }
        else max++;
    }

}