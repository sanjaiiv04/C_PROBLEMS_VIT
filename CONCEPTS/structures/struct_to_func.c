#include <stdio.h>
struct employee
{
    char name[20];
    int age;
};
void display(struct employee x);
void age(int);
int main()
{
    struct employee emp={"sanjaii",19};
    display(emp);//passing the entire structure to the function as argument
    age(emp.age);//passing the data members of a structure variable as argument
}
void display(struct employee x)
{
    printf("Name:%s",x.name);
    printf("\nAge:%d",x.age);
}
void age(int x)
{
    printf("Age:%d",x);
}