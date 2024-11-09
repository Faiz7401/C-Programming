#include <stdio.h>
#include <conio.h>

void display (int);  //function prototypes

int main()
{
   int number1=22;
   int number2=88;
   display(number2);// call display function, pass variable age

   getch();
   return 0;
}

void display (int number) //function definition
{
    printf("Number: %d",number);
}







