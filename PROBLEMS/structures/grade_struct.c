// GRADE SYSTEM OF 5 STUDENTS AFTER GETTING NAME,ROLLNO,DEPT NAME,MARKS FROM THE USER BY USING TWO NESTED STRUCTURES
#include <stdio.h>
#include <string.h>
struct details1
{
    char name[20];
    int roll;
    char dept[20];
};
struct details2
{
    int marks;
    char credit[5];
    struct details1 dets;
};
void func(struct details2 x[5]);
int n;
int main()
{
    printf("Enter no of students:"); scanf("%d",&n);
    struct details2 arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter name:"); scanf("%s",arr[i].dets.name);
        printf("Enter rollno:"); scanf("%d",&arr[i].dets.roll);
        printf("Enter dept:"); scanf("%s",arr[i].dets.dept);
        printf("Enter marks:"); scanf("%d",&arr[i].marks); 
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i].marks>=90) strcpy(arr[i].credit,"S");
        else if (arr[i].marks>=80 && arr[i].marks<90) strcpy(arr[i].credit,"A");
        else if (arr[i].marks>=70 && arr[i].marks<80) strcpy(arr[i].credit,"B");
        else if (arr[i].marks>=60 && arr[i].marks<70) strcpy(arr[i].credit,"C");
        else if (arr[i].marks>=50 && arr[i].marks<60) strcpy(arr[i].credit,"D");
        else if (arr[i].marks>=40 && arr[i].marks<50) strcpy(arr[i].credit,"E");
        else if (arr[i].marks<40) strcpy(arr[i].credit,"F");

    }
    func(arr);
}
void func(struct details2 x[])//passing entire structure variable to the function
{
    for (int i=0;i<n;i++)
    {
        printf("\nGRADE OBTAINED BY %s of %s:%s",x[i].dets.name,x[i].dets.dept,x[i].credit);
    }
}