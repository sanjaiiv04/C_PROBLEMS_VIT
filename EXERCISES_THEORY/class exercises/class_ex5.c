#include <stdio.h>
#include <math.h>
void func(int,int,int);
int main()
{
    int x,y,z;
    printf("Enter x:"); scanf("%d",&x);
    printf("Enter y:"); scanf("%d",&y);
    printf("Enter z:"); scanf("%d",&z);
    func(x,y,z);
}
void func(int a,int b,int c)
{
    if (pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) || pow(c,2)+pow(a,2)==pow(b,2))
    {
        printf("right triangle");
    }
    else if (a!=b && a!=c && b!=c)
    {
        printf("scalene");
    }
    else if ((a==b && b!=c)||(b==c && c!=a)||(c==a && a!=b)) 
    {
        printf ("isoceles");
    }
    else if (a==b && b==c && a==c) 
    {
        printf ("equilateral");
    }
}
