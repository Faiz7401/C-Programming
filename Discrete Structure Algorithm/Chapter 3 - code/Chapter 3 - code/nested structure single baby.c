
#include <stdio.h>

struct parent
{
    char name[30];
	int age;
};

struct baby
{
	char name[30];
	char gender[10];
	struct parent father;
	struct parent mother;
};

int main()
{	struct baby newborn;

    system ("cls");
	printf("\nEnter baby name: ");
	scanf(" %[^\n]s",&newborn.name);
	printf("\nEnter baby gender: ");
	scanf(" %[^\n]s",&newborn.gender);

	printf("\nEnter father name: ");
	scanf(" %[^\n]s",&newborn.father.name);
	printf("\nEnter father age: ");
	scanf(" %d",&newborn.father.age);

	printf("\nEnter mother name: ");
	scanf(" %[^\n]s",&newborn.mother.name);
	printf("\nEnter mother age: ");
	scanf(" %d",&newborn.mother.age);



   system ("cls");
   printf("\n\n\t\tNEW BORN BABY IN KUANTAN HOSPITAL");

    printf("\n\nBaby's Name: %s",newborn.name);
	printf("\nGender: %s",newborn.gender);

	printf("\nFather name: %s",newborn.father.name);
	printf("\nFather age: %d",newborn.father.age);
    printf("\nMother name: %s",newborn.mother.name);
	printf("\nMother age: %d",newborn.mother.age);

   printf("\n\n\n---------------------------------");

   getch();
   return 0;
}






