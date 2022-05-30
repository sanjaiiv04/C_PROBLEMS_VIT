#include <stdio.h>
#include <stdlib.h>
struct student
{
    int m;
    char name[30];
};
int n;
void func(struct student *x)
{
    for (int i=0;i<n;i++)
    {
        if (x[i].m>=90) printf("NAME:%s GRADE:S",x[i].name);
        else if (x[i].m>=80 && x[i].m<90) printf("NAME:%s GRADE:A",x[i].name);
    }
}
int main()
{
    printf("Enter no of records:"); scanf("%d",&n);
    struct student *ptr;
    ptr = malloc(n);
    for (int i=0;i<n;i++)
    {
        printf("Enter marks:"); scanf("%d",&ptr[i].m);
        printf("Enter name:"); scanf("%s",ptr[i].name);
    }
    func(ptr);
}