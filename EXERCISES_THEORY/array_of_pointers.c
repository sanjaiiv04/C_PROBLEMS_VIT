//using array of pointers
#include <stdio.h>
int main()
{
    int reg,m1,m2,m3;
    char name[20],dept[20];
    printf("Enter Reg.No:"); scanf("%d",&reg);
    printf("Enter Name::"); scanf("%s",name);
    printf("Enter dept:"); scanf("%s",dept);
    printf("Enter M1:"); scanf("%d",&m1);
    printf("Enter M2:"); scanf("%d",&m2);
    printf("Enter M3:"); scanf("%d",&m3);
    int arr1[4]={reg,m1,m2,m3};
    int *ptr_arr1[4]; //creating an int array of pointers.Each element in the array is an int pointer.
    char *ptr_arr2[]={name,dept}; //creating a char array of pointers. 
    for (int i=0;i<4;i++) ptr_arr1[i] = &arr1[i]; //assigning each pointer in the int array address of the values.
    for (int i=0;i<4;i++) printf("%d\n",*ptr_arr1[i]);
    for (int i=0;i<2;i++) printf("%s\n",ptr_arr2[i]);
}
