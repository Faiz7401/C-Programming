#include<stdio.h>
#include<string.h>

struct Student_collage{
    int college_id;
    char college_name[50];
};//Student_collage

struct Student{ //structure name;
    char id[10]; // structure member
    char name[25]; // structure member
    int age; // structure member
    struct Student_collage collage_detail; // structure within structure
}; //Student

int main(void){
    struct Student student1 = {"CB12088","Atikah",16,1,"Kolej kediaman 2"};
    printf("\nStudent");
    printf("\nID = %s",student1.id);
    printf("\nName = %s",student1.name);
    printf("\nAge = %d",student1.age);
    printf("\nCollage ID = %d",student1.collage_detail.college_id);
    printf("\nCollage Name = %s",student1.collage_detail.college_name);
}//main

