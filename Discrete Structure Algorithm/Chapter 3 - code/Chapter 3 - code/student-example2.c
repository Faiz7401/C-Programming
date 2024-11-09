#include<stdio.h>
#include<string.h>

struct Student{ //structure name;
    char id[10]; // structure member
    char name[25]; // structure member
    int age; // structure member
}; //Student

int main(void){
    struct Student stud_1; /* Declare stud_1 of type Student */
    struct Student stud_2; /* Declare stud_2 of type Student */

    printf("\nStudent 1");
    printf("\nEnter student ID : ");
    scanf("%s",&stud_1.id);
    printf("Enter student name : ");
    scanf("%s",&stud_1.name);
    printf("Enter student age : ");
    scanf("%d",&stud_1.age);

    printf("\nStudent 2");
    printf("\nEnter student ID : ");
    scanf("%s",&stud_2.id);
    printf("Enter student name : ");
    scanf("%s",&stud_2.name);
    printf("Enter student age : ");
    scanf("%d",&stud_2.age);


    printf("\nStudent 1.");
    printf("\nID = %s",stud_1.id);
    printf("\nName = %s",stud_1.name);
    printf("\nAge = %d",stud_1.age);

    printf("\n\nStudent 2.");
    printf("\nID = %s",stud_2.id);
    printf("\nName = %s",stud_2.name);
    printf("\nAge = %d",stud_2.age);
}//main

