#include <stdio.h>
#include <string.h>

int main()
{
    char name[50],faculty[10],date[20],stdID[20],phoneNo[20],roomBook[10],purpose[20],bookDate[20];
    int totalStud,timeFrom,timeTo,bookHour;

    printf("APPLICANT INFORMATION");
    printf("\nEnter your name: ");
    gets(name);
    printf("Enter your faculty(in short form): ");
    gets(faculty);
    printf("Enter today date: ");
    gets(date);
    printf("Enter Staff/Student ID: ");
    gets(stdID);
    printf("Enter your Mobile Phone: ");
    gets(phoneNo);

    printf("\nBOOKING INFORMATION");
    printf("\nNumber of student: ");
    scanf("%d",&totalStud);

    if (totalStud<=50)
    {
        printf("Enter option of lecture room (XBK1 to XBK10): ");
        scanf("%s",&roomBook);
        getchar();
    }
    else
    {
        printf("Enter option of lecture hall (YDK1 to YDK5): ");
        scanf("%s",&roomBook);
        getchar();
    }

    printf("Purpose: ");
    fgets(purpose,20,stdin);
    printf("Booking Date: ");
    scanf(" %s",&bookDate);
    printf("Enter booking time from(24 hour clock system): ");
    scanf(" %d",&timeFrom);
    printf("Enter booking time to(24 hour clock system): ");
    scanf(" %d",&timeTo);

    bookHour=(timeTo-timeFrom)/100;

    printf("\n\n\n\t\t\tLECTURE HALL/ROOM BOOKING FORM");
	printf("\n========================================================================");
	printf("\nAPPLICANT INFORMATION");
	printf("\n========================================================================");
	printf("\nNAME\t: %s\t\t STAFF/STUDENT ID: %s",name,stdID);
	printf("\nFACULTY : %s\t\t\t\t\t MOBILE NUM. \t : %s",faculty,phoneNo);
	printf("\nDATE\t: %s",date);
	printf("\n========================================================================");
	printf("\nBOOKING INFORMATION");
	printf("\n========================================================================");
	printf("\nNUMBER OF STUDENT\t\t\t: %d",totalStud);
	printf("\nLECTURE HALL/ROOM LOCATION\t\t: %s",roomBook);
	printf("\nBOOKING DATE\t\t\t\t: %s",bookDate);
	printf("\nBOOKING TIME\t\t\t\t: FROM %d TO %d",timeFrom,timeTo);
	printf("\nTOTAL BOOKING TIME\t\t\t: %d HOURS",bookHour);
	printf("\nPURPOSE\t\t\t\t\t: %s",purpose);
}
