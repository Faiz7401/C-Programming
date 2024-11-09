#include <stdio.h>
#include <ctype.h>
#define MAXSTACK 10

int top=-1; //top start at -1 because array start at 0  when the first push() is done
int stack[MAXSTACK];
int i,number,element,elementPopped;
char ch;

void push(int);
void palindrome(int);
int pop();
void display(int list);

int main()
{
	do
	{

		printf("\n\n[-------Enter the choice-------]");
		printf("\nEnter 1 to insert an element in to stack");
		printf("\nEnter 2 to delete an element from the stack");
		printf("\nEnter 3 to check an element is palindrome or not");
		// palindrome if original list and reversed list are equal
		printf("\nEnter 4 to check status of the stack");
		printf("\nEnter 5 to exit");
		printf("\nPlease enter choice: ");

		scanf(" %c",&ch);
		ch=toupper(ch);
		switch (ch)

		{
		case '1': printf("\nPlease enter the number to push stack: ");
				  scanf("%d",&number);
				  push(number);
				  break;

		case '2': printf("\nPop the stack");
				  elementPopped=pop();
				  if (elementPopped!=0)
				  printf("\nElement popped is %d",elementPopped);
				  break;

        case '3': printf("\nEnter an integer element to check whether it is palindrome or not: ");
                  scanf("%d",&element);
				  palindrome(element);
				  break;

		case '4': display(top);
				  break;

		case '5': printf("\nExit stack menu");
				  break;

		default: printf("\nInvalid entry. Please select 1, 2, 3, 4, 5\n");
		}
	}while (ch!='5');

	return 0;
}



void push(int item)
{
	if(top+1==MAXSTACK)  //Check for stack OVERFLOW
	{
      printf("\n");
      printf("\n!!! stack OVERFLOW - can't push stack !!!");
      return; //disallow further push operation by return to main menu
	}

	else
	{
		stack[++top]=item;//increment TOP variable and assign new item to topmost stack element.
		//display(top);
      return;
	}
}

int pop()
{   int popElement;
	if (top<0) //Check for stack underflow
	{
      printf("\n");
      printf("\n!!! stack UNDERFLOW - can't pop stack !!!");
      return 0; //If stack underflow occurs, disallow further pop operation.
	}

	else
	{   popElement=stack[top];
		top=top-1; //If not, decrement TOP variable by one.
		//display(top);
      return (popElement);
	}
}

void palindrome(int intElement)
{
    int remainder=0,reversedInteger=0,originalInteger=0;
    int reverseInteger[MAXSTACK],counter=0;


    while(intElement!=0){
        remainder=intElement%10;//find the remainder
        reverseInteger[counter]=remainder;
        push(remainder);
        //printf("\n%d",remainder);
        counter++;
        intElement=intElement/10;
    }

    for (int i=0;i<counter;i++)
    {
        originalInteger=originalInteger*10+pop();
        reversedInteger=reversedInteger*10+reverseInteger[i];
    }

    printf("\nOriginal Integer: %d",originalInteger);
    printf("\nReverse Integer: %d",reversedInteger);

    if(originalInteger==reversedInteger)
        printf("\n%d is palindrome\n",originalInteger);
    else
        printf("\n%d is not palindrome\n",originalInteger);

}

void display(int list)
{
	printf("\nThe status of the stack is: ");
	if(list==-1)
		printf("\nThe stack is now empty");
	else
	{
		//for (i=0;i<=list;i++)
			//printf("\nNumber at location stack %d = %d",i,stack[i]);

        for (i=list;i>=0;i--)
            printf("\n%d",stack[i]);



	}
}
