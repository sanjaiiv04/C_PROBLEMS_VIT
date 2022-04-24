//roman equivalent of calendar year
#include<stdio.h>
void func(int);
int main()
{
    int year;
    printf("Enter year: "); scanf("%d", &year);
    printf("The roman equivalent of %d:",year);
    func(year);
}
void func(int x)
{
    if(x>=1000)
    {
        printf("m");
        func(x-1000);
    }
    else if(x>=500)
    {
        printf("d");
        func(x-500);
    }
    else if(x>=100)
    {
        printf("c");
        func(x-100);
    }
    else if(x>=50)
    {
        printf("l");
        func(x-50);
    }
    else if(x>=10)
    {
        printf("x");
        func(x-10);
    }
    else if(x>=5)
    {
        printf("v");
        func(x-5);
    }
    else if(x>=1)
    {
        printf("i");
        func(x-1);
    }
}