//pattern
#include <stdio.h>
int main()
{
    for (int i=5;i>=0;i--)
    {
        char x='A';
        for (int j=1;j<=i;j++)
        {
            printf("%c ",x);
            x=x+1; /* character can be added with an int. Here A+1 will be B because 
            when character is added with int the character is converted into ASCII and then added.*/
        }
        printf("\n");
    }
}
