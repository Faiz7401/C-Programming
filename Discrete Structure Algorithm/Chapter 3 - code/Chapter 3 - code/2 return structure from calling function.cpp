#include <stdio.h>
#include <conio.h>

struct Student    //structure name
{
	char id[10];      // structure member
    char name[25];
	int age;
}  ;

void display (struct Student); //prototypes
struct Student getStudentInfo();//prototypes

int main()
{
   struct Student stud;

   stud=getStudentInfo();

   display(stud);  //pass structure variable to function
   getch();
   return 0;
}

struct Student getStudentInfo()//function definition
{
    struct Student stud1 = {"CD12088","Hidayah",16};
    struct Student stud2 = {"CB18888","Fatin",20};

    return stud1;
}

void display(struct Student student)//function definition
{
	printf("\nstudent.name = %s",student.name);
	printf("\nstudent.id = %s",student.id);
	printf("\nstudent.age = %d",student.age);
}
