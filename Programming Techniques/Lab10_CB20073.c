#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name[30], stdID[10], paName[30];
    int i,totalSub,totalCredit=0;

    printf("Enter your name : ");
    gets(name);
    printf("Enter your student ID : ");
    scanf("%s",&stdID);
    printf("Enter your total subjects : ");
    scanf("%d",&totalSub);
    getchar();

    printf("Enter your academic advisor name : ");
    gets(paName);
    fflush(stdin);

    char subName[totalSub][50];
    char subCode[totalSub][10];
    int creditHour[totalSub];

    printf("\n");
    for(i=0;i<totalSub;i++)
    {
        printf("Enter subject name %d: ",i+1);
        gets(subName[i]);
    }

    printf("\n");
    for(i=0;i<totalSub;i++)
    {
        printf("Enter subject code %d: ",i+1);
        scanf("%s",&subCode[i]);
    }

    printf("\n");
    for(i=0;i<totalSub;i++)
    {
        printf("Enter credit hour %d: ",i+1);
        scanf("%d",&creditHour[i]);
    }

    for(i=0;i<totalSub;i++)
    {
        totalCredit=totalCredit+creditHour[i];
    }

    printf("\n\n\t\t   Uninersity of Gambang\n\t\tSubjects Registration Form");
    printf("\n==========================================================");
    printf("\n\t\t   Uninersity of Gambang\n\t\tSubjects Registration Form");
    printf("\n==================================================================");
    printf("\nName\t\t: %s",name);
    printf("\nStudent ID\t: %s",stdID);
    printf("\nTotal Subjects\t: %d",totalSub);
    printf("\n------------------------------------------------------------------");
    printf("\nNo\tSubject Name\t\t\tSubject Code\tCredit");
    for(i=0;i<totalSub;i++)
    {
        printf("\n%d\t%s\t\t%s\t\t%d",i+1,subName[i],subCode[i],creditHour[i]);
    }
    printf("\n------------------------------------------------------------------");
    printf("\nTotal Credits:\t\t\t\t\t%d",totalCredit);
    printf("\n\nAcademic Advior: %s\n",paName);

    return 0;

}
