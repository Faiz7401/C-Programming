#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define MAXQUEUE 3

int queue[MAXQUEUE];

int front=0;
int rear=MAXQUEUE-1;

int count = 0;

int item;
char ch;

void enqueue(int);
void dequeue();
void display();

int main()
{
	do
	{   printf("\n\nThe front value is %d",front);
	    printf("\nThe rear value is %d",rear);
	    printf("\nThe count value is %d",count);

		printf("\n\n[-------Queue Menu-------]");
		printf("\nA - Enqueue");
		printf("\nB - Dequeue");
		printf("\nD - Display Queue Content");
		printf("\nX - Exit Menu");
		printf("\nPlease enter choice: ");

		scanf(" %c",&ch);
		ch=toupper(ch);
		switch (ch)

		{
		case 'A':printf("\nPlease enter the number to insert into queue: ");
				  scanf("%d",&item);
				  enqueue(item);
				  break;

		case 'B':printf("\nDelete the queue");
				  dequeue();
				  break;

		case 'D':display();
				  break;

		case 'X':printf("\nExit queue menu");
				  break;

		default: printf("\nInvalid entry. Please select 'A','B','C','D','X'\n");
		}
	}while (ch!='X');

	return 0;
}



void enqueue(int item)
{
	if(count==MAXQUEUE)
	{
	printf("\n!!! Queue OVERFLOW - can't insert into queue !!!");
	}

	else
	{
		rear=(rear+1)%MAXQUEUE;
		count++;
		queue[rear]=item;
	}

   display();
}

void dequeue()
{
	if (count==0)
	{
	printf("\n!!! Queue UNDERFLOW - can't delete queue !!!");
	}

	else
	{
		front=(front+1)%MAXQUEUE;
		count--;
	}

   display();
}

void display()
{
	int i=front;
	int j=count;

	printf("\n\nContent of queue: ");

	if(count==0)
	printf("\nThe queue is empty");

	else
	{

		while (j!=0)
		{
			printf("%d \t",queue[i]);
			i=(i+1)%MAXQUEUE;
			j--;
		}
	}
}
