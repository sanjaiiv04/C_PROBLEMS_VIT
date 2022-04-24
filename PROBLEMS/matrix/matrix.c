//find maximum minimum element in a 5X5 matrix.Also find the sum of elements in each row of the matrix.
#include <stdio.h>
int main()
{
    int row,column;
    printf("Enter row:"); scanf("%d",&row);
    printf("Enter column:"); scanf("%d",&column);
    int arr[row][column];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("Enter element:"); scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0],min = arr[0][0];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            if (arr[i][j]>max) max = arr[i][j];
            else if (arr[i][j]<min) min = arr[i][j];
        }
    }
    printf("The matrix:"); printf("\n");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Max:%d Min:%d",max,min);
    
    int sum=0;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            sum+=arr[i][j];
        }
        printf("\nsum of row-%d:%d",i+1,sum);
        sum=0;
    }
    int sum2=0,j=0;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            sum2+=arr[j][i]; 
        }
        printf("\nsum of column-%d:%d",j+1,sum2);
        sum2=0;
    }
}