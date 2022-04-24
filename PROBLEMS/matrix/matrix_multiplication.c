#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter row for A:"); scanf("%d",&m);
    printf("Enter column for A:"); scanf("%d",&n);
    int arr1[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            int el;
            printf("Enter element:"); scanf("%d",&el);
            arr1[i][j]=el;
        }
    }
    printf("Enter row for B:"); scanf("%d",&p);
    printf("Enter column for B:"); scanf("%d",&q);
    int arr2[p][q];
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<q;j++)
        {
            int el;
            printf("Enter element:"); scanf("%d",&el);
            arr2[i][j]=el;
        }
    }
    int arr3[m][q];
    if (n!=p) printf("Matrix multiplication not possible");
    else 
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<q;j++)
            {
                arr3[i][j]=arr1[i][j]*arr2[i][j];
            }
        }
    }

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<q;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

}