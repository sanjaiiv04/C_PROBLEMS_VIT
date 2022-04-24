//program to print the marks obtained by student in 6 subjects and print the average mark in percentage by passing array to function
//register no:21BRS1021
#include <stdio.h>
void marks(int *x);
int main()
{
    int arr[6],m;
    for (int i=0;i<6;i++)
    {
        printf("enter marks:");
        scanf("%d",&m);
        arr[i]=m;
    }
    marks(arr);
}

void marks(int *x)
{
    int total=0;
    float avg;
    for (int i=0;i<6;i++)
    {
        total+=x[i];
    }
    avg=(float)total/6;
    printf("Total marks obtained by the student in 6 subjects:%d",total);
    printf("\nAverage marks of the student in 6 subjects:%.2f",avg);

}
