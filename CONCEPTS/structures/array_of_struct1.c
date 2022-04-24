#include <stdio.h>
struct marks //strcture definition
{
    int m1; //data member 1
    int m2; //data member 2
};
int main()
{
    struct marks student[2]={{99,98},{97,96}}; /*declaring strcuture variable which is array of strcutures.
    this means that each element of the array is a structure variable and each element must have the data members*/
    int total[2];
    for (int i=0;i<2;i++)
    {
        total[i]=student[i].m1 + student[i].m2;
    }
    for (int i=0;i<2;i++) printf("%d\n",total[i]);
}