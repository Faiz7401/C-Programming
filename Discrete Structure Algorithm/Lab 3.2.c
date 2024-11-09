
#include <stdio.h>
#include <conio.h>

struct birthday
{
    char day[4];
    char month[4];
    char year[6];
};


struct parent
{
    char name[30];
	int age;
};



struct baby
{
	char name[30];
	char gender[10];
    struct birthday date;
	struct parent father;
	struct parent mother;
};

int main()
{	struct baby newborn[2];
    int i;

   for(i =0;i<2;i++)
   {
    system ("cls");
	printf("\nEnter baby name: ");
	scanf(" %[^\n]s",&newborn[i].name);
	printf("\nEnter baby gender: ");
	scanf(" %[^\n]s",&newborn[i].gender);
	printf("\nEnter baby birthday: ");
	printf("\n\tDay: ");
	scanf(" %[^\n]s",&newborn[i].date.day);
	printf("\n\tMonth: ");
	scanf(" %[^\n]s",&newborn[i].date.month);
	printf("\n\tYear: ");
	scanf(" %[^\n]s",&newborn[i].date.year);
	printf("\nEnter father name: ");
	scanf(" %[^\n]s",&newborn[i].father.name);
	printf("\nEnter father age: ");
	scanf(" %d",&newborn[i].father.age);
	printf("\nEnter mother name: ");
	scanf(" %[^\n]s",&newborn[i].mother.name);
	printf("\nEnter mother age: ");
	scanf(" %d",&newborn[i].mother.age);

   }

   system ("cls");
   printf("\n\n\t\tNEW BORN BABY IN KUANTAN HOSPITAL");

   for(i =0;i<2;i++)
   {
    printf("\n\nBaby's Name: %s",newborn[i].name);
	printf("\nGender: %s",newborn[i].gender);
	printf("\nBirthday:");
	printf(" %s",newborn[i].date.day);
    printf(" %s",newborn[i].date.month);
    printf(" %s",newborn[i].date.year);
	printf("\nFather name: %s",newborn[i].father.name);
	printf("\nFather age: %d",newborn[i].father.age);
    printf("\nMother name: %s",newborn[i].mother.name);
	printf("\nMother age: %d",newborn[i].mother.age);

   printf("\n\n\n---------------------------------");
   }
   getch();
   return 0;
}






