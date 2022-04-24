#include <stdio.h>
struct students
{
    char name[20];
    int roll;
};
int main()
{
    struct students s={"sanjaii",21};
    struct students *ptr;
    ptr = &s;
    printf("Name:%s",ptr->name);//instead of using '.' use the arrow to point to the data members.
    printf("\nRollNo:%d",ptr->roll);


}