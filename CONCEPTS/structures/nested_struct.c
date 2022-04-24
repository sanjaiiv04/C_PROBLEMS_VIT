//nested separate structures
#include <stdio.h>
struct address 
{
    char city[20];
    int pin;
};
struct emp
{
    char name[20];
    struct address addr; /*already existing structure address used in employee structure.
    So when you get values for the employee variable we use the variable addr for getting values
    for the dependent structure*/

};
int main()
{
    struct emp x;
    printf("Enter employee info:"); 
    scanf("%s %s %d",x.name,x.addr.city,&x.addr.pin);
    printf("\nYou entered:%s %s %d",x.name,x.addr.city,x.addr.pin);
}