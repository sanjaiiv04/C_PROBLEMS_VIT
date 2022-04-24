#include <stdio.h>
struct marks
{
    int n;
    int m[2];
};
int main()
{
    struct marks a;
    printf("Enter number:"); scanf("%d",&a.n);
    for (int i=0;i<2;i++)
    {
        printf("Enter marks:"); scanf("%d",&a.m[i]);
    }
    for (int i=0;i<2;i++) printf("%d ",a.m[i]);
}