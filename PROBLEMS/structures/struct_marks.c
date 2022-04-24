//get the register_no name and marks of 4 subjects of 3 students and print the total marks and average.
// if each subject marks is less than 50 print fail else pass.
#include <stdio.h>
#include <string.h>
struct exam
{
    int reg_no;
    char name[30];
    int m1,m2,m3,m4;
    int total[4];
    float avg[4];
    char result[3][10];
};
void func(struct exam *x);
int main()
{
    struct exam arr[3];
    for (int i=0;i<3;i++)
    {
        printf("Enter register no:"); scanf("%d",&arr[i].reg_no);
        printf("Enter name:"); scanf("%s",arr[i].name);
        printf("Enter m1:"); scanf("%d",&arr[i].m1);
        printf("Enter m2:"); scanf("%d",&arr[i].m2);
        printf("Enter m3:"); scanf("%d",&arr[i].m3);
        printf("Enter m4:"); scanf("%d",&arr[i].m4);
    }
    func(arr);
}  
void func(struct exam *x)
{
    for (int i=0;i<3;i++)
    {
        x[i].total[i] = x[i].m1 + x[i].m2 + x[i].m3 + x[i].m4;
        x[i].avg[i] =(float)x[i].total[i] / 4;
        if (x[i].m1>=50 && x[i].m2>=50 && x[i].m3>=50 && x[i].m4>=50) strcpy(x[i].result[i],"pass");
        else strcpy(x[i].result[i],"fail");
        printf("\nTotal:%d Avg:%.2f Result:%s",x[i].total[i],x[i].avg[i],x[i].result[i]);
        
    }

}