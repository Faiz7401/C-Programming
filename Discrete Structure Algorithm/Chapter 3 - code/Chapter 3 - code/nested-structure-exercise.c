#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Father{
    char father_name[50];
    int father_age;
};

struct Mother{
    char mother_name[50];
    int mother_age;
};

struct Baby{
    char name[50];
    char gender[10];
    struct Father father_detail;
    struct Mother mother_detail;
};

int main(){

    struct Baby baby1 = {"Jason","Male","Micheal",31,"Jane",30};

    printf("\nBaby Information");
    printf("\nName : %s",baby1.name);
    printf("\nGender : %s",baby1.gender);
    printf("\nFather Name : %s",baby1.father_detail.father_name);
    printf("\nFather Age : %d",baby1.father_detail.father_age);
    printf("\nMother Name : %s",baby1.mother_detail.mother_name);
    printf("\nMother Age : %d",baby1.mother_detail.mother_age);

    getch();
    return 0;
}//
