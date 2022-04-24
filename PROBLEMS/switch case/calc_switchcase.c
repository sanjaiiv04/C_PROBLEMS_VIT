#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter a:"); scanf("%d",&a);
    printf("Enter b:"); scanf("%d",&b);
    printf("Enter operator:"); scanf(" %c",&op);
    switch (op)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
            break;
        default:
            printf("Invalid operator");
            break;
    }
}
