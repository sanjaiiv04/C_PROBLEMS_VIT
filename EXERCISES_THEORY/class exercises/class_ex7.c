/* program to implement strcpy without library function */
#include <stdio.h>
int main()
{
    char a[20],b[20];
    printf("Enter a:"); scanf("%s",a);
    printf("Enter b:"); scanf("%s",b);
    printf("Before copying a into b, b=%s",b);
    if (strlen(a)>strlen(b))
    {
        for (int i=0;a[i]!='\0';i++)
        {
            b[i]=a[i];
        }
    }
    else 
    {
        for (int i=0;b[i]!='\0';i++)
        {
            b[i]=a[i];
        }
    }
    printf("\nAfter copying a into b, b=%s",b);

}
