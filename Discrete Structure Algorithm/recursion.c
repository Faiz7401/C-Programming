//Multiplication using recursion
#include <stdio.h>
#include <conio.h>

void main()
{
	int multiply(int,int);
	int num,times;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	printf("\nEnter how many times: ");
	scanf("%d",&times);

    printf("\nResult %d * %d = %d",num,times,/*recursion call*/multiply(num,times));
    getch();
}

//Recursive multiplication
int multiply(int num,int times){
    if(times==1)
        return num;
    else
        return num +
	multiply(num,times-1);
}
