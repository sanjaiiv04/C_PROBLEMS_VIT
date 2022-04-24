#include <stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    typedef struct student stud;
    stud s1;
    printf("Enter name:"); scanf("%s",s1.name);
    printf("Enter age:"); scanf("%d",&s1.age);
    printf("\nYour name:%s and your age:%d",s1.name,s1.age);
}