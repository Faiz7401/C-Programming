#include <stdio.h>
#include <conio.h>



struct Student
{
    char id[10];
    char name[30];
    int age;
};


int main()
{

    struct Student stud1;
    struct Student stud2;

    printf("\n Enter student1 age:");
    scanf("%d",&stud2.age);

    printf("\n student1 age is:%d",stud2.age);

    getch();
    return 0;
}
