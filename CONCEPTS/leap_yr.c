//year divisible by 4 is leap year. If the year is century year(divisible by 100) check by dividing year with 400.
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter year:"); scanf("%d",&yr);
    if (yr%100!=0)
    {
        if (yr%4==0) printf("Leap year");
        else printf("Not a leap year");
    }
    else 
    {
        if (yr%400==0) printf("Leap year");
        else printf("Not a leap year");
    }
}