//determine if a character entered is upper lower digit or spl characger using switch case.
#include <stdio.h>
int func(char);
int main()
{
    char x;
    printf("Enter a character:"); scanf(" %c",&x);
    switch(func(x))
    {
        case 1:
            printf("Lowercase");
            break;
        case 2:
            printf("Uppercase");
            break;
        case 3:
            printf("Digits");
            break;
        case 4:
            printf("Special character");
            break;
        default:
            printf("Invalid");
            break;
    }
}
int func(char a)
{
    if (a>='a' && a<='z') return 1;
    else if (a>='A' && a<='Z') return 2;
    else if (a>='0' && a<='9') return 3;
    else return 4;
}