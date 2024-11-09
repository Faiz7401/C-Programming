#include <stdio.h>
#include <conio.h>

struct Student    //structure name
{
	char id[10];      // structure member
  	char name[25];
	int age;
}  ;

void display (struct Student); //prototypes

int main()
{
   struct Student stud1 = {"CD12088","Hidayah",16};
   struct Student stud2 = {"CB18888","Fatin",20};


   display(stud1);  //pass structure variable to function
   getch();
   return 0;
}

void display(struct Student student)//function definition
{
	printf("\nstudent.name = %s",student.name);
	printf("\nstudent.id = %s",student.id);
	printf("\nstudent.age = %d",student.age);
}








