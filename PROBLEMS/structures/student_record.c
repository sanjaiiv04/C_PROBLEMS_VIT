#include <stdio.h>
struct student 
{
    int roll;
    char name[30];
    char dept[10];
    int yr;
};
int n;
void func1(struct student *x);
void func2(struct student *y);
int main()
{
    printf("Enter number of students:"); scanf("%d",&n);
    struct student arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter rollno:"); scanf("%d",&arr[i].roll);
        printf("Enter name:"); scanf("%s",arr[i].name);
        printf("Enter dept:"); scanf("%s",arr[i].dept);
        printf("Enter year:"); scanf("%d",&arr[i].yr);

    }
    func1(arr);
    func2(arr);

}
void func1(struct student *x)
{
    int year;
    printf("Enter year to search:"); scanf("%d",&year);
    for (int i=0;i<n;i++)
    {
        if (x[i].yr==year) printf("\nName:%s Year:%d",x[i].name,x[i].yr); 
        else 
        {
            printf("Record not found"); 
            break;
        }  
    }
}
void func2(struct student *y)
{
    int rollno;
    printf("Enter roll no to search:"); scanf("%d",&rollno);
    for (int i=0;i<n;i++)
    {
        if (y[i].roll==rollno)
        {
            printf("\nRollno:%d Name:%s Dept:%s Year:%d",y[i].roll,y[i].name,y[i].dept,y[i].yr);
        }
        else 
        {
            printf("Record not found");
            break;
        }
    }
}