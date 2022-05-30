#include <stdio.h>
#include <stdlib.h>
int main()
{
    //forming the matrix
    int row,column;
    printf("Enter rows:"); scanf("%d",&row);
    printf("Enter column:"); scanf("%d",&column);
    int arr[row][column];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("enter element:"); scanf("%d",&arr[i][j]);
        }
    }
    // the question
    int cnt=0;
    for(int k=2;k<=column;k++)
    {
        for (int i=0;i<column-k+1;i++)
        {
            for (int j=0;j<column-k+1;j++)
            {
                cnt++;
                int perimeter=0;
                for (int a=i;a<k+i;a++)
                {
                    for (int b=j;b<k+j;b++)
                    {
                        
                        printf("%d ",arr[a][b]);
                        if (a==0||b==0||a==k+i-1||b==k+j-1)
                        {
                            perimeter+=arr[a][b];
                        }
                    }
                    printf("\n");
                }
                printf("Perimeter:%d\n",perimeter);
                printf("\n");
            }
        }
    }
}