#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char studID[6];
    char program[5];
};
struct PSM
{
    char lecturerID[5];
    struct Student stdList[3];
};
void display(struct PSM);
//void display(int,int);
int main()
{
    struct PSM psm1;
    printf("Hello world!\n");
    printf("Lecturer ID : ");
    gets(psm1.lecturerID);
    printf("Registered students\n");
    for(size_t i = 0;i<2;i++)
    {
        printf("ID : ");
        gets(psm1.stdList[i].studID);
        printf("Program : ");
        gets(psm1.stdList[i].program);
    }

    display(psm1);
    return 0;
}

void display(struct PSM psm)
{
    int count=0;

    printf("Lecturer ID : %s\n",psm.lecturerID);

    printf("Registered students\n");
    for(size_t i = 0;i<2;i++)
    {

        printf("%2s\t%s \n",psm.stdList[i].program,psm.stdList[i].studID);
        count++;
    }
    printf("Total registered students : %d",count);
}

