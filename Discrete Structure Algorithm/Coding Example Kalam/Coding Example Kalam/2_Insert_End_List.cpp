// Program to illustrates the insertion at the end of a linked list

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


void new_number();
void list_number();

struct Number
{
	int number;
	struct Number *ptrnext;
};

struct Number *headptr, *newptr, *currentptr;  //pointer that can point to a node

int main()
{
	char ch;
	int choice=TRUE;

	headptr=NULL;
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
  newptr=(struct Number *)malloc(sizeof (struct Number));

  printf("\nEnter a number: ");
  scanf("%d",&newptr->number);

  if (headptr==NULL)
  {headptr=newptr;
   newptr->ptrnext=NULL;
  }

  else
 {
   currentptr=headptr;

   while(currentptr->ptrnext !=NULL)
   {
    currentptr=currentptr->ptrnext;
   }

    currentptr->ptrnext=newptr;
    newptr->ptrnext=NULL;
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
		printf("\n");
		currentptr=currentptr->ptrnext; //point to next node
	}while(currentptr !=NULL);
}



