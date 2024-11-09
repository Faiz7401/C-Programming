// Program to illustrates the insertion into middle of a linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void new_patient();
void list_patient();

struct patient
{
	int roomNumber;
  	 int patientNumber;
	struct patient *ptrnext; //pointer that can point to a node structure
};

struct patient *headptr, *newptr, *currentptr;  //pointer that can point to a node

void main()
{
	char ch;
	int choice=TRUE;

	headptr=(struct patient *)NULL;
	while(choice==TRUE)

	{
		printf("\n\ne - Enter new patient's number");
		printf("\nl - List all patients");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':new_patient();break;
		case 'l':list_patient();break;
		case 'x': choice=FALSE; break;

		default: printf("\nEnter only one from the above");
		}
	}
}

void new_patient()
{
    int location;
  newptr=(struct patient *)malloc(sizeof (struct patient)); // pointer to a new								//	memory allocation
   printf("\nEnter room number: ");
   scanf("%d",&newptr->roomNumber);
   printf("\nEnter patient number: ");
   scanf("%d",&newptr->patientNumber);

	if (headptr==NULL)//node is empty?
	  	{
	  	    headptr=newptr; //first pointer point to first node
	  	    newptr->ptrnext=NULL; //first node pointer point to null
      }

	else
	{
	    printf("\nAfter what roomNumber you want to enter: ");
        scanf("%d",&location);

        currentptr=headptr;

		while(currentptr !=NULL)
		{
			if (currentptr->roomNumber == location) //found the location
         break;

         else
         {
     			currentptr=currentptr->ptrnext; //point to next node
         }
		}

      if ( currentptr==NULL)
      {
         printf("\nThe room Number you entered is not exist!!!");
      }

      else
      {
      newptr->ptrnext=currentptr->ptrnext;// new node pointer point to previous next node
		currentptr->ptrnext=newptr; // link field of current node point to new node
      }
	}

    list_patient();

}

void list_patient()
{
	if (headptr==(struct patient*)NULL) //empty list
	{
		printf("\nEmpty list");
		return;
	}

	currentptr=headptr;


   printf("\n\nRoom Number	Patient Number\n");
	do
  	 {
	printf("\n%d	 %d",currentptr->roomNumber,currentptr->patientNumber);
	printf("\n");
	currentptr=currentptr->ptrnext; //point to next node
	} while(currentptr !=(struct patient *)NULL);
}
