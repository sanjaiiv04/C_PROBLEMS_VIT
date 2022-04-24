#include <stdio.h>
int sum(int,int);
int main()
{
    int res,a=10,b=20;
    int (*ptr)(int,int);/*return type of function is int.
    so pointer is defined as int. Function has two int arguments so
    the pointer is defined wth two int arguments.*/
    ptr = &sum;
    res = (*ptr)(a,b);/*actual parameter is given to the pointer 
    which is pointing to the function*/
    printf("%d",res);

}
int sum(int a,int b)
{
    return a+b;
}