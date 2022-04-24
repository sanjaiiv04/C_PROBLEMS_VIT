#include <stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    struct student arr[3];
    struct student *ptr;
    for (int i=0;i<3;i++)
    {
        printf("Enter name:"); scanf("%s",arr[i].name);
        printf("Enter age:"); scanf("%d",&arr[i].age);
    }
    ptr = arr;
    for (int i=0;i<3;i++)
    {
        printf("name:%s age:%d",ptr->name,ptr->age);
        ptr++;
    }
}