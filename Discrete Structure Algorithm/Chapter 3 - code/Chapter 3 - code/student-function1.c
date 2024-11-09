#include<stdio.h>
#include <conio.h>
#include<string.h>

struct Student{ //structure name;
    char id[10]; // structure member
    char name[25]; // structure member
    int age; // structure member
}; //Student

/* function prototypes or declaration */
void display(struct Student);

int main(){
    struct Student student1;
    struct Student student2;

    strcpy(student1.id, "CB12088");
    strcpy(student1.name, "Atikah");
    student1.age = 16;

    strcpy(student2.id, "");
    strcpy(student2.name, "Fatin");
    student2.age = 17;

    display(student2);
    printf("\n");


    getch();
   return 0;
}//main

void display(struct Student student){
    printf("\nStudent Info.");
    printf("\nID = %s",student.id);
    printf("\nName = %s",student.name);
    printf("\nAge = %d",student.age);
}
