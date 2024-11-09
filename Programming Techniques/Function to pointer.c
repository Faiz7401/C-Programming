#include <stdio.h>
#include <string.h>

int summonAmount();                            // declare function #1
int calcSummon(float s, float p, float d);     // declare function #2
void printPayment(float ts, float d, float p); // declare function #3

int main ()
{
    char name[20], IDnom[20], vehicleNo[20], date[20];
    int dayLate;
    float summon,  discount, penalty, totalSummon;

    printf("Enter driver name\t: ");
    gets(name);
    printf("Enter ID no.\t\t: ");
    scanf("%s",&IDnom);
    printf("Enter vehicle no.\t: ");
    scanf("%s",&vehicleNo);

    summon = summonAmount();  // calling function #1
    fflush(stdin);

    printf("Date of summon issued\t: ");
    gets(date);
    fflush(stdin);
    printf("The summon need to be paid within 5 days from dates of summon \nissued.");
    printf("\nNo. of days late: ");
    scanf("%d",&dayLate);
    printf("\n--------------------------------\n");

    if (dayLate<=5)
    {
        discount=0.1*summon;
    }
    else if(dayLate<=7)
    {
        penalty=0.1*summon;
    }
    else
    {
        penalty=0.2*summon;
    }

    totalSummon = calcSummon(summon, penalty, discount);  //calling function #2

    printf("\nPayment Information");//print
    printf("\n===================");
    printf("\nName\t\t\t: %s", name);
    printf("\nID No.\t\t\t: %s", IDnom);
    printf("\nVehicle No.\t\t: %s", vehicleNo);
    printPayment(totalSummon, discount, penalty);  //calling function #3

    return 0;
}

int summonAmount()  //function#1 : summonAmount
{
    float amount;

    printf("Summon amount (in RM)\t: ");
    scanf("%f",&amount);

    return amount;
}

int calcSummon(float s, float p, float d)  // function#2 : calcSummonamount
{
    return (p-d+s) ;   //calc
}

void printPayment(float ts, float d, float p)  // function #3 : printPayment
{
    printf("\nTotal Summon\t\t: RM %0.2f", ts);
    printf("\nDiscount\t\t: RM %0.2f", d);
    printf("\nTotal amount of penalty\t: RM %0.2f", p);

    return;
}



