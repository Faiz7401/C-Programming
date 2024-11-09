#include <stdio.h>
#include <string.h>

int main ()
{
    //variable used for this system
    char vehicleType, vehicleName[10]="Car",status[20]=" ";
    float firstRate,secondRate,totalRate;
    int enterHour, leftHour, parkingTime;

    //user prompt
    printf("(C for Car, T for Truck, B for Bus)");
    printf("\nType of vehicle? ");
    scanf("%c",&vehicleType);
    printf("Hour vehicle entered lot(0-24)? ");
    scanf("%d",&enterHour);
    printf("Hour vehicle left lot   (0-24)? ");
    scanf("%d",&leftHour);

    //making a decision rate for each vehicle
    if(vehicleType=='C')//for car
    {
        strcpy(vehicleName,"Car");
        firstRate = 0;
        secondRate = 1.3;
    }
    else if (vehicleType=='T')//for truck
    {
        strcpy(vehicleName,"Truck");
        firstRate = 1;
        secondRate = 2.3;
    }
    else if (vehicleType=='B')//for bus
    {
        strcpy(vehicleName,"Car");
        firstRate = 2;
        secondRate = 3.7;
    }


    //calculation for parking hour
    parkingTime = leftHour - enterHour;

    //calculate the total charge followed by parking hour
     if (parkingTime<0)
      {
        parkingTime=parkingTime+24;
        strcpy(status,"TOWED AWAY");
      }
     else if (parkingTime<=3)
      {
        totalRate=  firstRate;
      }
     else
      {
        totalRate = firstRate+(parkingTime-3)*secondRate;
      }

    //user output
    printf("\n\t\tPARKING LOT CHARGE");
    printf("\nTYPE OF VEHICLE:%s",vehicleName);
    printf("\nTIME-IN\t\t:%d:00",enterHour);
    printf("\nTIME-OUT\t:%d:00",leftHour);
    printf("\n\t\t-----------");
    printf("\nPARKING TIME\t:%d",parkingTime);
    printf("\n\t\t-----------");

    if(leftHour>enterHour)
    {
        printf("\nTOTAL CHARGE\t:RM %f",totalRate );
    }
    else
    {
        printf("\nTOTAL CHARGE\t:%s",status);
    }
    return 0;
}

