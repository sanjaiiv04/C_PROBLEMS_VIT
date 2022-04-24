// nested embedded structures
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    struct date
    {
        int dd,mm,yyyy;
    }dob;
};

int main()
{
    struct employee e1;
    e1.id=25;
    strcpy(e1.name,"sanjaii");
    e1.dob.dd=4;
    e1.dob.mm=8;
    e1.dob.yyyy=2003;
    printf("\nYour id:%d",e1.id);
    printf("\nYour name:%s",e1.name);
    printf("\nYour date of birth:%d:%d:%d",e1.dob.dd,e1.dob.mm,e1.dob.yyyy);
}
