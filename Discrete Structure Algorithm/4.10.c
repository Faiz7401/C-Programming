// Program to illustrates the deletion at the end of a linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void new_student();
void list_student();
void delete_student();

struct student
{
	int roomNumber;
    char studentName[30];
	struct student *ptrnext; //pointer that can point to a node structure
};

struct student *headptr, *newptr, *currentptr, *previousptr;  //pointer that can point to a node

void main()
{
	char ch;
	int choice=TRUE;

	headptr=(struct student *)NULL;
	while(choice==TRUE)

	{
		printf("\n\ne - Enter new student");
		printf("\nl - List all student");
		printf("\nd - Delete a student");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':new_student();break;
		case 'l':list_student();break;
		case 'd' :delete_student();break;
		case 'x': choice=FALSE; break;

		default: printf("\nEnter only one from the above");
		}
	}
}

void new_student()
{
  newptr=(struct student *)malloc(sizeof (struct student)); // pointer to a new								//	memory allocation
   printf("\nEnter room number: ");
   scanf("%d",&newptr->roomNumber);
   printf("\nEnterStudent Name: ");
   scanf("%s",&newptr->studentName);

	if (headptr==(struct student *)NULL)//node is empty?
	  	{
	  	    headptr=newptr; //first pointer point to first node
            newptr->ptrnext=(struct student *)NULL; //first node pointer point to null
        }

	else
	{
      newptr->ptrnext=headptr;// new node pointer point to previous first node
      headptr=newptr; // head point to new node,new node become first node
	}



}

void list_student()
{
	if (headptr==(struct student*)NULL) //empty list
	{
		printf("\nEmpty list");
		return;
	}

	currentptr=headptr;


   printf("\n\nRoom Number	Student\n");
	do
  	 {
	printf("\n%d	 %s",currentptr->roomNumber,currentptr->studentName);
	printf("\n");
	currentptr=currentptr->ptrnext; //point to next node
	} while(currentptr !=(struct student *)NULL);
}

void delete_student()
{

	if (headptr==NULL)//node is empty?
    {
    printf("\n\nThe list is empty. Cannot delete!!!\n");//the list is empty
    }

	else
	{
      currentptr=headptr;//current contain the address of first node
      while(currentptr->ptrnext!=NULL)
        {
            previousptr=currentptr;
            currentptr=currentptr->ptrnext;
        }
        if (currentptr==headptr)
        {
            headptr=NULL;
            free(currentptr);
        }
        else
        {
            previousptr->ptrnext=NULL;
            free(currentptr);
        }

	}
}
