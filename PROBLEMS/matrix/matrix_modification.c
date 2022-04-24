//if one of the elements of matrix(a[i][j]th element) is zero make the ith row and jth coloumn zero.
#include <stdio.h>
int main()
{
    int m,n,row,column;
    printf("Enter rows:"); scanf("%d",&m);
    printf("Enter columns:"); scanf("%d",&n);
    int arr[m][n];
    //getting elements from user
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            int el;
            printf("Enter element:"); scanf("%d",&el);
            arr[i][j]=el;
        }
    }
    //getting the row and column where the element is zero.
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]==0) row=i,column=j;
        }
    }
    //printing matrix before changing
    printf("\nMatrix before modification\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //changing the matrix and making the row and column having zero all zeroes.
    for (int i=0;i<m;i++) arr[i][column]=0;
    for (int i=0;i<n;i++) arr[row][i]=0;
    //printing the matrix after modifying.
    printf("\nMatrix after modification\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}