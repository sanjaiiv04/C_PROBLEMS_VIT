#include <stdio.h>
#include <string.h>
struct lib
{
    char mem_no[10];
    char name[30];
    char cat[30];
    int no_of_books;
    char book[10][50];
};
int n;
void func1(struct lib *x);
void func2(struct lib *y);
void func3(struct lib *z);

int main()
{
    printf("Enter no of records:"); scanf("%d",&n);
    struct lib arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter membership no:"); scanf("%s",arr[i].mem_no);
        printf("Enter name:"); scanf("%s",arr[i].name);
        printf("Enter categgory:"); scanf("%s",arr[i].cat);
        printf("Enter no of books:"); scanf("%d",&arr[i].no_of_books);
        for (int j=0;j<arr[i].no_of_books;j++)
        {
            printf("Enter book name:"); scanf("%s",arr[i].book[j]);
        }
    }
    func1(arr);
    func2(arr);
    func3(arr);
    
}
void func1(struct lib *x)
{
    char input[50];
    printf("Enter no:"); scanf("%s",input);
    for (int i=0;i<n;i++)
    {
        if(strcmp(input,x[i].mem_no)==0)
        {
            for (int j=0;j<x[i].no_of_books;j++)
            {
                printf("%s\n",x[i].book[j]);
            }
            break;
        }
        else 
        {
            printf("sorry");
            break;
        }

    }
}
void func2(struct lib *y)
{
    for (int i=0;i<n;i++)
    {
        if (y[i].no_of_books>4)
        {
            printf("\n%s\n",y[i].name);
        }
    }
}
void func3(struct lib *z)
{
    char b[50];
    printf("\nEnter book name:"); scanf("%s",b);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<z[i].no_of_books;j++)
        {
            if (strcmp(b,z[i].book[j])==0)
            {
                printf("%s\n",z[i].name);
            }
        }
    }
}