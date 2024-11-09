#include<stdio.h>
#include<string.h>

struct Student{ //structure name;
    char id[10]; // structure member
    char name[25]; // structure member
    int age; // structure member
}; //Student

int main(void){
    struct Student student1 = {"CB12088","Atikah",16};
    struct Student student2 = {"","Fatin",17};

    printf("\nStudent 1.");
    printf("\nID = %s",student1.id);
    printf("\nName = %s",student1.name);
    printf("\nAge = %d",student1.age);

    printf("\n\nStudent 2.");
    printf("\nID = %s",student2.id);
    printf("\nName = %s",student2.name);
    printf("\nAge = %d",student2.age);
}//main

