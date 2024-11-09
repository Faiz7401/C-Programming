#include <stdio.h>
#include <conio.h>

int getNumber();  //function prototypes

int main()
{
   printf("\n Number return from getNumber function is %d\n",getNumber());

   getch();
   return 0;
}

int getNumber () //function definition
{   int number = 20;
    return number;
}








