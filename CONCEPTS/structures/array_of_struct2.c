//array of structures
#include <stdio.h>
struct student 
{
    char name[20];
    int rollno;
};
int main()
{
    struct student arr[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter rollno:"); scanf("%d",&arr[i].rollno);
        printf("Enter name:"); scanf("%s",arr[i].name);
    }
    for (int i=0;i<5;i++)
    {
        printf("\nRollno:%d Name:%s",arr[i].rollno,arr[i].name);
    }
}
