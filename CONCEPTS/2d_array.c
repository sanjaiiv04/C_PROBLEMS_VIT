// print 2D array getting input of rows and columns from user
//register no:21BRS1021
#include <stdio.h>

int main()
{
    int row,column;
    printf("enter rows:"); scanf("%d",&row);
    printf("enter columns:"); scanf("%d",&column);
    int arr[row][column];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            int element;
            printf("enter element:"); scanf("%d",&element);
            arr[i][j] = element;
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }   
}

