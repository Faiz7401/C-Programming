#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void display(struct Student student[]);
struct Student calculateTotalMark(struct Student student[]);

struct Subject
{
    int bahasa_melayu;
    int bahasa_inggeris;
    int matametik;
    int sains;
};

struct Student
{
	char student_id[10];
	char student_name[30];
    char classroom_name[30];
	struct Subject mark;
	int totalMark;
};

int main()
{	struct Student stud[2];
    int i;
   for(i =0;i<1;i++)
   {
    system ("cls");
	printf("\nEnter student name: ");
	scanf(" %[^\n]s",&stud[i].student_name);
	printf("\nEnter student id: ");
	scanf(" %[^\n]s",&stud[i].student_id);
	printf("\nEnter classroom name: ");
	scanf(" %[^\n]s",&stud[i].classroom_name);
	printf("\nEnter student mark for: ");
	printf("\n\tBahasa Melayu: ");
	scanf(" %d",&stud[i].mark.bahasa_melayu);
	printf("\n\tBahasa Inggeris: ");
	scanf(" %d",&stud[i].mark.bahasa_inggeris);
	printf("\n\tMatematik: ");
	scanf(" %d",&stud[i].mark.matametik);
	printf("\n\tSains: ");
	scanf(" %d",&stud[i].mark.sains);
   }

   system ("cls");


   //printf("\n\n\t\tSTUDENT EXAMINATION RESULT");
   //for(i =0;i<1;i++)
   //{
      display(stud);

      stud[i]=calculateTotalMark(stud);
      printf("\nTotal mark for student %d is: %d", i+1,stud[i].totalMark);

      printf("\n\n\n---------------------------------");
   //}

   getch();
   return 0;
}

 void display(struct Student student[])
 {

    printf("\n\n\t\tSTUDENT EXAMINATION RESULT");

    for(i =0;i<1;i++)
   {
    printf("\n\nStudent's Name: %s",student.student_name);
	printf("\nMatrix ID: %s",student.student_id);
	printf("\nClassroom name: %s",student.classroom_name);
	printf("\n\nStudent marks for subject:");
	printf("\nBahasa Melayu %d",student.mark.bahasa_melayu);
    printf("\nBahasa Inggeris %d",student.mark.bahasa_inggeris);
    printf("\nMatematik %d",student.mark.matametik);
    printf("\nSains %d",student.mark.sains);

   }

 }

 struct Student calculateTotalMark(struct Student student[])
 {
     int totalMark=0;
     totalMark=student.mark.bahasa_melayu+student.mark.bahasa_inggeris+student.mark.matametik+student.mark.sains;
     student.totalMark=totalMark;


    return student;

 };
