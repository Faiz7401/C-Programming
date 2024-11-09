#include<stdio.h>

int main()
{
    float accomodation,oRehearsals,pRehearsals,priceCD,totalUSD,totalRM;
    float numOfNight,fee=1200,oDuration,pDuration,numberOfCD;

    printf("Number of Night: ");
    scanf("%f",&numOfNight);
    printf("Duration for orchestra rehearsals(miutes): ");
    scanf("%f",&oDuration);
    printf("Duration for piano rehearsals(miutes): ");
    scanf("%f",&pDuration);
    printf("Number of CD: ");
    scanf("%f",&numberOfCD);

    accomodation=numOfNight*150;
    oRehearsals=oDuration*420/60;
    pRehearsals=pDuration*120/60;
    priceCD=numberOfCD*150;

    totalUSD=fee+accomodation+oRehearsals+pRehearsals+priceCD;
    totalRM=totalUSD*4.07;

    printf("------------------------------------");
    printf("\nTotal in USD: %.2f",totalUSD);
    printf("\nTotal in RM: %.2f",totalRM);

    return 0;
}
