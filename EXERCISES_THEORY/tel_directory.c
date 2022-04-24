#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter of records:"); scanf("%d",&n);
    char names[n][20];
    long int contact[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter name:"); scanf("%s",names[i]);
        printf("Enter contact no:"); scanf("%ld",&contact[i]);

    }
    int choice;
    printf("\n1. Determine the telephone number of the specified person.");
    printf("\n2. Determine the name if the telephone number is known.");
    printf("\n3. Update the telephone number");
    printf("\n4. Print the customer records");
    printf("\nEnter choice:"); scanf("%d",&choice);
    if (choice==1)
    {
        char search_no[20];
    int flag2=0;
    printf("\nEnter name to search:"); scanf("%s",search_no);
    for (int i=0;i<n;i++)
    {
        if (strcmp(search_no,names[i])==0)
        {
            printf("\nPhone no:%ld",contact[i]);
            flag2=1;
            break;
        }
        else flag2=0;
    }
    if (flag2==0) printf("\nCustomer name not found.");
    }
    else if (choice==2)
    {
        int search_name;
    int flag1=0;
    printf("\nEnter contact no to search:"); scanf("%d",&search_name);
    for (int i=0;i<n;i++)
    {
        if (contact[i]==search_name) 
        {
            printf("\nName:%s",names[i]);
            flag1=1;
            break;
        }
        else flag1=0;
    
    }
    if (flag1==0) printf("\nPhone number not found.");
    }
    else if (choice==3)
    {
        char change_no[20];
        int flag3=0;
        printf("Enter customer name to update:"); scanf("%s",change_no);
        for (int i=0;i<n;i++)
        {
            if (strcmp(names[i],change_no)==0)
            {
                long int phone;
                printf("Enter new phone no:"); scanf("%ld",&phone);
                contact[i] = phone;
                printf("Phone number updated successfully");
                printf("\nName:%s Contact:%ld",names[i],contact[i]);
                flag3=1;
                break;
            }
            else flag3=0;
        }
        if (flag3==0) printf("Record not found.");
    }
    else if (choice==4)
    {
        for (int i=0;i<n;i++)
        {
            printf("\nName:%s Contact:%ld",names[i],contact[i]);
        }
    }
}