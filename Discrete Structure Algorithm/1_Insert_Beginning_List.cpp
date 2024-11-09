// Program to illustrates the insertion into beginning of a linked list
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void new_number();
void list_number();

struct Number
{
	int number;//data field
	struct Number *ptrnext; //pointer that can point to a node structure
};

struct Number *headptr, *newptr, *currentptr;
//pointer that can point to a node

int main()
{
	char ch;
	int choice=TRUE;

	headptr=NULL;//head is null
	while(choice==TRUE)

	{
		printf("\n\ne - Enter a number");
		printf("\nl - List all numbers");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':new_number();break;
		case 'l':list_number();break;
		case 'x': choice=FALSE; break;

		default: printf("\nEnter only one from the above");
		}
	}
 return 0;
}

void new_number()
{
  newptr=(struct Number *)malloc(sizeof(struct Number)); // pointer to a new
  //printf("\nThe new node address is: %x",newptr);
  //mallloc is memory location																		//	memory allocation

  printf("\nEnter a number: ");
  scanf("%d",&newptr->number);

  if (headptr==NULL)//node is empty?
  {headptr=newptr; //first pointer point to first node
   newptr->ptrnext=NULL; //first node pointer point to null
  }

  else
   {
    newptr->ptrnext=headptr;// new node pointer point to previous first node
    headptr=newptr; // head point to new node,new node become first node
   }
}

void list_number()
{
	if (headptr==NULL) //empty list
	{
		printf("\nEmpty list");
		return;
	}

	currentptr=headptr;


	do
   {
		printf("\n\n%d",currentptr->number);
		//printf("\n\n%d at node address %x",currentptr->number,currentptr);
		//printf("\n\n%d  %s",currentptr->number,currentptr->name);
		printf("\n");

		currentptr=currentptr->ptrnext; //point to next node
	} while(currentptr !=NULL);
}



