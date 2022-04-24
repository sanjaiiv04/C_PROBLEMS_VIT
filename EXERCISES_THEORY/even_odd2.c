//odd or even or prime using pointer to functions
#include <stdio.h>
void prime(int);
void odd_even(int);
int main()
{
    int n;
    printf("Enter number:"); scanf("%d",&n);
    void (*fptr1)(); // pointer to prime function. As it has void return type pointer is assigned void
    void (*fptr2)(); // pointer to odd_even function. 
    fptr1 = &prime; // assigning address of the prime function to pointer 
    fptr2 = &odd_even; // assigning address of the odd_even function to pointer 
    (*fptr1)(n); //using the pointer to call the function.As the function has arguments the pointer is called with arguments
    (*fptr2)(n);
}
void prime(int a)
{
    int cnt=0;
    for (int i=1;i<=a;i++)
    {
        if (a%i==0) cnt++;
    }
    if (cnt==2) printf("\nIt is a prime number.");
    else printf("\nIt is not a prime number.");
}
void odd_even(int a)
{
    if (a%2==0) printf("\nIt is even");
    else printf("\nIt is odd");
}
