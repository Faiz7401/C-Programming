#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
	char student_name[30];
	char student_id[10];
    char course_name[30];
	char project_title[30];
	char project_field[30];
	char supervisor_name[30];
};

int main()
{	struct student stud[2];
    int i;
   for(i =0;i<2;i++)
   {
    system ("cls");
	printf("\nEnter student name: ");
	scanf(" %[^\n]s",&stud[i].student_name);
	printf("\nEnter student id: ");
	scanf(" %[^\n]s",&stud[i].student_id);
	printf("\nEnter course name: ");
	scanf(" %[^\n]s",&stud[i].course_name);
	printf("\nEnter project titile: ");
	scanf(" %[^\n]s",&stud[i].project_title);
	printf("\nEnter the field of the project: ");
	scanf(" %[^\n]s",&stud[i].project_field);
	printf("\nEnter supervisor name: ");
	scanf(" %[^\n]s",&stud[i].supervisor_name);
   }

   system ("cls");
   printf("\n\n\t\tUNDERGRADUATE PROJECT RECORD SYSTEM");

   for(i =0;i<2;i++)
   {
    printf("\n\nStudent's Name: %s",stud[i].student_name);
	printf("\nMatrix ID: %s",stud[i].student_id);
	printf("\nCourse: %s",stud[i].course_name);
	printf("\nProject's Title: %s",stud[i].project_title);
	printf("\nField: %s",stud[i].project_field);
    printf("\nSupervisor: %s",stud[i].supervisor_name);
    printf("\n\n\n---------------------------------");
   }
   getch();
   return 0;
}

