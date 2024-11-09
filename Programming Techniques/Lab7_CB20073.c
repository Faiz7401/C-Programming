#include <stdio.h>
#include <string.h>

int calc_NewSalary ();

int main()
{
    int amt;

    amt = calc_NewSalary();

    return 0;
}

int calc_NewSalary ()
{
    char staffID[10],positionName[10];
    int yearWork, position, salary, newSalary;

    printf("Enter staff ID\t\t\t\t\t: ");
    scanf("%s",&staffID);
    printf("Enter years of working\t\t\t\t: ");
    scanf("%d",&yearWork);
    printf("Enter your position [1: Junior, 2: Senior]\t: ");
    scanf("%d",&position);

    if (position==1)
    {
        strcpy(positionName,"Junior");
        switch(yearWork)
        {
        case 1 ... 5 :
            salary = 2600;
            break;
        default :
            salary = 3600;
            break;
        }
        newSalary = salary + 300;
    }
    else if(position==2)
    {
        strcpy(positionName,"Senior");
        switch(yearWork)
       {
        case 1 ... 5 :
            salary = 4600;
            break;
        default :
            salary = 5600;
            break;
        }
        newSalary = salary + 500;
    }
     else
    {
        printf("\nWrong Input,\nPlease Try Again\n");
        return newSalary;
    }

    printf("\n\nPosition\t\t: %s",positionName);
    printf("\nYears of Working\t: %d",yearWork);
    printf("\nNew Salary\t\t: %d\n",newSalary);

    return newSalary;
}
