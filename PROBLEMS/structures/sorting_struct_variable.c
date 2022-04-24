//bank maintains details of customer as acc_no,name and balance. Sort the data based on the balance.
#include <stdio.h>
struct customer
{
    int acc_no;
    char name[40];
    int balance;
};
int main()
{
    int n;
    printf("enter no of customers:"); scanf("%d",&n);    
    struct customer arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter account number:"); scanf("%d",&arr[i].acc_no);
        printf("Enter name:"); scanf("%s",arr[i].name);
        printf("Enter balance:"); scanf("%d",&arr[i].balance);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i].balance < arr[j].balance)
            {
                struct customer temp;
                temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0;i<n;i++) printf("\nBALANCE:%d NAME:%s ACC.NO:%d",arr[i].balance,arr[i].name,arr[i].acc_no);
}
