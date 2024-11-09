// Program to illustrates the deletion at the middle of a linked list

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void new_number();
void list_number();
void delete_number();

struct number
{
	int number;
	struct number *ptrnext;
};

struct number *headptr, *newptr, *currentptr, *previousptr;  //pointer that can point to a node

int main()
{
	char ch;
	int choice=TRUE;

	headptr=NULL;
	while(choice==TRUE)

	{
		printf("\n\ne - Enter a number");
		printf("\nl - List all numbers");
        printf("\nd - Delete a number");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':new_number();break;
		case 'l':list_number();break;
        case 'd':delete_number();break;
		case 'x': choice=FALSE; break;

		default: printf("\nEnter only one from the above");
		}
	}
	return 0;
}

void new_number()
{
  newptr=(struct number *)malloc(sizeof (struct number)); // pointer to a new
                                                        //	memory allocation

	if (headptr==NULL)//node is empty?
	  	{headptr=newptr; //first pointer point to first node
       newptr->ptrnext=NULL; //first node pointer point to null
      }

	else
	{
      newptr->ptrnext=headptr;// new node pointer point to previous first node
		headptr=newptr; // head point to new node,new node become first node

	}

	printf("\nEnter a number: ");
	scanf("%d",&newptr->number);

}

void list_number()
{
	if (headptr==(struct number*)NULL) //empty list
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
	}while(currentptr !=(struct number *)NULL);
}

void delete_number()
{int number;

 if (headptr==NULL)//node is empty?
 {
  printf("\n\nThe list is empty. Cannot delete!!!\n");//the list is empty
 }

 else
 {
  printf("\nEnter number to delete: ");
  scanf("%d",&number);

  currentptr=headptr;

  while(currentptr->ptrnext!=NULL)
  {

    if (currentptr->number == number) //found the location
    {
      break;
    }
    else
    {
      previousptr=currentptr;//save the previous current address
      currentptr=currentptr->ptrnext; //point to next node
    }

  }

    if(currentptr->number==number)
    {
     if (currentptr==headptr) //number is the first and only node in list
     {
       headptr=currentptr ->ptrnext; //head point to NULL
       free(currentptr);
     }
     else //delete at the middle of link list
     {
       previousptr->ptrnext=currentptr->ptrnext;//previous node point to next node
       free(currentptr);//destroy  node, free the memory.
     }
    }

    else
    printf("\nNumber to be deleted is not in the list!!! ");


    }

}



