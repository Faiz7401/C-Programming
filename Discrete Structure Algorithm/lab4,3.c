// Program to illustrates the insertion into beginning of a linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0



struct event
{
	int roomNumber;
   char eventName[30];
	struct event *ptrnext; //pointer that can point to a node structure
};

struct event *headptr, *newptr, *currentptr;  //pointer that can point to a node

//function declaration
void new_event();
void list_event();

void main()
{
	char ch;
	int choice=TRUE;

	headptr=(struct event *)NULL;//WTF??
	while(choice==TRUE)

	{
		printf("\n\ne - Enter new event");
		printf("\nl - List all events");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':new_event();break;
		case 'l':list_event();break;
		case 'x': choice=FALSE; break;

		default: printf("\nEnter only one from the above");
		}
	}
}

void new_event()
{
  newptr=(struct event *)malloc(sizeof (struct event)); // pointer to a new
  																		//	memory allocation

if (headptr==(struct event *)NULL)//node is empty?
    {
        headptr=newptr; //first pointer point to first node
        newptr->ptrnext=(struct event *)NULL; //first node pointer point to null
      }

	else
	{
      newptr->ptrnext=headptr;// new node pointer point to previous first node
      headptr=newptr; // head point to new node,new node become first node

	}

	printf("\nEnter room number: ");
	scanf("%d",&newptr->roomNumber);
    printf("\nEnter name of the event: ");
	scanf(" %[^\n]s",&newptr->eventName);

}

void list_event()
{
	if (headptr==(struct event*)NULL) //empty list
	{
		printf("\nEmpty list");
		return;
	}

	currentptr=headptr;


   printf("\n\nRoom number:\n");
	do
   {
	printf("\n%d	 %s",currentptr->roomNumber,currentptr->eventName);
		printf("\n");
		currentptr=currentptr->ptrnext; //point to next node
	} while(currentptr !=(struct event *)NULL);
}
