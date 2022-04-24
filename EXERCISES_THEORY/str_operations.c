//string operations using functions
//register no:21BRS1021
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *strrev(char *str);
void f1(char a[20]);
void f2(char a[20], char b[20]);
void f3(char a[20], char b[20]);
void f4(char a[20], char b[20]);
void f5(char a[20]);
void f6(char a[20]);
void f7(char a[20]);
int main()
{
    int choice;
    char a[20];
    char b[20];
    printf("1. The length of string\n2. Copies the contents of source string to destination string");
    printf("\n3. concatenate first string with second string");
    printf("\n4. Compare the first string with second string\n5. Reverse string");
    printf("\n6. String characters in lowercase\n7. String characters in uppercase");
    printf("\nEnter your choice:");
    scanf("%d", &choice);

    if (choice == 1 || choice == 5 || choice == 6 || choice == 7)
    {
        printf("\nEnter The String: ");
        scanf("%s", a);
        if (choice == 1)
        {
            f1(a);
        }
        else if (choice == 5)
        {
            f5(a);
        }
        else if (choice == 6)
        {
            f6(a);
        }
        else
        {
            f7(a);
        }
    }
    else if (choice == 2 || choice == 3 || choice == 4)
    {
        printf("\nEnter a: ");
        scanf("%s", a);
        printf("\nEnter b: ");
        scanf("%s", b);
        if (choice == 2)
        {
            f2(a, b);
        }
        else if (choice == 3)
        {
            f3(a, b);
        }
        else
        {
            f4(a, b);
        }
    }
}
char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}
void f1(char a[20])
{
    printf("\nlength Of The String %s : %lu", a, strlen(a));
}
void f2(char a[20], char b[20])
{
    printf("\nBefore copying a %s and b %s", a, b);
    strcpy(a, b);
    printf("\nAfter copying a %s and b %s", a, b);
}
void f3(char a[20], char b[20])
{
    strcat(a, b);
    printf("\nResult Of concatenation: %s", a);
}
void f4(char a[20], char b[20])
{
    if (strcmp(a, b) == 0)
    {
        printf("\na == b");
    }
    else
    {
        printf("\n a Not Equal TO b");
    }
}
void f5(char a[20])
{
    printf("\nReverse Of String %s Is : %s", a, strrev(a));
}
void f6(char a[20])
{
    int i = 0;
    printf("\nString characters in lower case: ");
    char chr;
    while (a[i])
    {
        chr = a[i];
        printf("%c",tolower(chr));
        i++;
    }
}
void f7(char a[20])
{
    int i = 0;
    printf("\nString characters in upper case: ");
    char chr;
    while (a[i])
    {
        chr = a[i];
        printf("%c", toupper(chr));
        i++;
    }
}

