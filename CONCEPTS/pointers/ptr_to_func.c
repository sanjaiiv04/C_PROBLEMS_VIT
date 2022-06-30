#include <stdio.h>
void sum(int,int);
int main()
{
    int a=10,b=20;
    void (*ptr)(int,int);/*return type of function is int.
    so pointer is defined as int. Function has two int arguments so
    the pointer is defined wth two int arguments.*/
    ptr = &sum;
    /*res = (*ptr)(a,b);actual parameter is given to the pointer 
    which is pointing to the function*/
    (*ptr)(a,b);

}
void sum(int a,int b)
{
    printf("%d",a+b);
}