//swap numbers using call by value
//register no:21BRS1021
#include <stdio.h> 
void swap(int a,int b);
int main() 
{
    int a,b;
    printf("enter value of a:"); scanf("%d",&a);
    printf("enter value of b:"); scanf("%d",&b);
    printf("Before swapping the values in main:a = %d, b = %d\n",a,b); 
    swap(a,b); //actual parameters
    printf("After swapping values in main:a = %d, b = %d\n",a,b);
} 

void swap (int a, int b) //formal parameters
{
    int temp; 
    temp = a; 
    a=b; 
    b=temp;
    printf("After swapping values in function:a = %d, b = %d\n",a,b); 
}
