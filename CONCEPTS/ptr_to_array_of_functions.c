//array of functions 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arithm();
void mathh();
void strr();
void (*arr[3])(); /* array of functions. Here we have 3 functions. The functions have void return type
and hence the array is also defined as void */
void (*(*ptr)[3])(); //pointer to the array of functions

int main()
{
    arr[0]=arithm;
    arr[1]=mathh;
    arr[2]=strr;
    ptr = &arr; // assigning the array to the pointer
    (**ptr)(); //now using the pointer to access the elements of the array
    (*(*ptr+1))();
    (*(*ptr+2))();

}
void arithm()
{
    int a,b;
    printf("Enter a:"); scanf("%d",&a);
    printf("Enter b:"); scanf("%d",&b);
    printf("Addition:%d",a+b);
    printf("\nSubstraction:%d",a-b);
    printf("\nMultiplication:%d",a*b);
    printf("\nDivision:%.2f",(float)a/b);
    printf("\nRemainder:%d",a%b);
}
void mathh()
{
    float a,b;
    printf("\nEnter a:"); scanf("%f",&a);
    printf("Enter b:"); scanf("%f",&b);
    printf("Ceil...a:%f,b:%f",ceil(a),ceil(b));
    printf("\nFloor...a:%f,b:%f",floor(a),floor(b));
    printf("\nPower:%f",pow(a,b));
    printf("\nAbsolute value...a:%f b:%f",fabs(a),fabs(b));
}
void strr()
{
    char a[20],b[20];
    printf("\nEnter s1:"); scanf("%s",a);
    printf("Enter s2:"); scanf("%s",b);
    printf("Length...a:%lu,b:%lu",strlen(a),strlen(b));
    strcat(a,b);
    printf("\nConcat..%s",a);
    strcpy(b,a);
    printf("\nAfter copying s1 into s2, s2:%s",b);
    if (strcmp(a,b)==0) printf("\nThey are equal.");
    else printf("\nThey are not equal.");
}
