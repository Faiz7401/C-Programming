#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct river{
    char state[10];
    char river[50];
    int wqi;
    char category;
    struct river *ptrnext;
};

struct river *headptr, *newptr, *currentptr;

void newRecord();
void listRecord();

int main()
{
	char ch;
	int choice=TRUE;

	headptr=NULL;//head is null
	while(choice==TRUE)

	{
	    printf("\n------Menu-----");
		printf("\n\ne - Enter a river record");
		printf("\nl - List all river record");
		printf("\nx - Exit\n");
		printf("\nEnter choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'e':
		    new_number();
		    break;
		case 'l':
		    listRecord();
		    break;
		case 'x':
		    choice=FALSE;
		    break;

		default: printf("\nEnter only one from the above");
		}
	}
	return 0;
}

void new_number()
{

    printf("\n------Enter River-----");
    newptr=(struct river *)malloc(sizeof(struct river));

    printf("\nEnter State : ");
    scanf(" %[^\n]s",&newptr->state);

    printf("Enter River Name : ");
    scanf(" %[^\n]s",&newptr->river);

    printf("Enter Water Quality Index : ");
    scanf(" %d",&newptr->wqi);

    if (headptr==NULL){
            headptr=newptr;
            newptr->ptrnext=NULL;
    } else {
        newptr->ptrnext=headptr;
         headptr=newptr;
   }
}

void listRecord()
{
    printf("\n------List of River-----");
	if (headptr==NULL)
	{
	    printf("\nEmpty list");
	    return;
	}

	currentptr=headptr;

	printf("\nState\t\tRiver\t\tWQI\tCategory");
	do
    {
        if(currentptr->wqi<60){
            currentptr->category='P';
        } else if(currentptr->wqi>=60 && newptr->wqi<=81){
            currentptr->category='SP';
        } else if(currentptr->wqi>81 && currentptr->wqi<100){
            currentptr->category='C';
        } else{
            currentptr->category='-';
        }

       printf("\n%s\t\t%s\t\t%d\t%c",currentptr->state,currentptr->river,currentptr->wqi,currentptr->category);
       currentptr=currentptr->ptrnext;

    } while(currentptr !=NULL);
    printf("\n");

}

