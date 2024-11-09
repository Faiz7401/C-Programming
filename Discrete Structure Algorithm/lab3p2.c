#include <stdio.h>
#include <conio.h>

struct parent
{
    char name[10];
    int age;
};

struct birthday
{
    int day;
    int months;
    int year;

};
struct Baby
{
    char name[10], gender[10];
    struct birthday dob;
    struct parent father;
    struct parent mother;
};

int main()
{
    struct Baby newborn[2];

    for(int i=0;i<2;i++)
    {
        system ("cls");
        printf("\nEnter baby name: ");
        scanf("%s",&newborn[i].name);
        printf("Enter baby gender: ");
        scanf("%s",&newborn[i].gender);

        printf("Enter baby day of birthday: ");
        scanf(" %d",&newborn[i].dob.day);
        printf("Enter baby month of birthday: ");
        scanf(" %d",&newborn[i].dob.months);
        printf("Enter baby year of birthday: ");
        scanf(" %d",&newborn[i].dob.year);

        printf("\nEnter father name: ");
        scanf(" %s",&newborn[i].father.name);
        printf("Enter father age: ");
        scanf(" %d",&newborn[i].father.age);

        printf("\nEnter mother name: ");
        scanf(" %s",&newborn[i].mother.name);
        printf("Enter mother age: ");
        scanf(" %d",&newborn[i].mother.age);
    }

    system ("cls");
	printf("\n\n\t\tNEW BORN BABY IN KUANTAN HOSPITAL");

    for(int i=0;i<2;i++)
    {
        printf("\n\nBaby's Name: %s",newborn[i].name);
        printf("\nGender: %s",newborn[i].gender);

        printf("\nBirthday: %d/%d/%d",newborn[i].dob.day,newborn[i].dob.months,newborn[i].dob.year);

        printf("\n\nFather name: %s",newborn[i].father.name);
        printf("\nFather age: %d",newborn[i].father.age);
        printf("\nMother name: %s",newborn[i].mother.name);
        printf("\nMother age: %d",newborn[i].mother.age);

        printf("\n\n\n---------------------------------");

        getch();
    }
}
