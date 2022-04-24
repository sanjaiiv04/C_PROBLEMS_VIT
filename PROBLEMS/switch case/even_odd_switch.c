#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character:"); 
    scanf(" %c",&x);
    switch (x%2)
    {
        case 0:
            printf("Even");
            break;
        case 1:
            printf("Odd");
            break;
        default:
            printf("Invalid input");
            break;
    }
}