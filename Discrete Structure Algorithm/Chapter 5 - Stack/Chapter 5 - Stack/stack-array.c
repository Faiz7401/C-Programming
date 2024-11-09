#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define MAXSTACK 3

//top start at -1 because array start at 0  when the first push() is done
int top=-1;
int stack[MAXSTACK];
int i,getpush;
char ch;

void push(int);
void pop();
void display(int list);

int main(){
	do{
        printf("\n\nThe top value is now %d",top);
		printf("\n\n[-------Stack Menu-------]");
		printf("\nA - Push Stack");
		printf("\nB - Pop Stack");
		printf("\nD - Display Stack Content");
		printf("\nX - Exit Menu");
		printf("\nPlease enter choice: ");

		scanf(" %c",&ch);
		ch=toupper(ch);

		switch (ch){
            case 'A': printf("\nPlease enter the number to push stack: ");
                      scanf("%d",&getpush);
                      push(getpush);
                      break;

            case 'B': printf("\nPop the stack");
                      pop();
                      break;

            case 'D': display(top);
                      break;

            case 'X': printf("\nExit stack menu");
                      break;

            default: printf("\nInvalid entry. Please select A, B, D, X\n");
		}//switch
	}while (ch!='X');//do while

    //getch();
    return 0;
}//main

void push(int item){
    //Check for stack OVERFLOW
	if(top+1==MAXSTACK){
        printf("\n");
		printf("\n!!! stack OVERFLOW - can't push stack !!!");
        return; //disallow further push operation by return to main menu
	}//if
	else{
        //increment TOP variable and assign new item to topmost stack element.
        stack[++top]=item;
		display(top);
        return;
	}//else
}//push()

void pop(){
	//Check for stack underflow
	if (top<0){
        printf("\n");
        printf("\n!!! stack UNDERFLOW - can't pop stack !!!");
        return; //If stack underflow occurs, disallow further pop operation.
	}//if
	else{
        //If not, decrement TOP variable by one.
		top=top-1;
		display(top);
      return;
	}//else
}//pop()

void display(int list){
	printf("\nContents of stack: ");
	if(list==-1){
		printf("\nThe stack is now empty");
	}//if
	else{
		for (i=0;i<=list;i++){
            printf("\nNumber at location stack %d = %d",i,stack[i]);
        }//for
	}//else
}//display()
