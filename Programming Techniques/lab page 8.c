#include<stdio.h>

int main()
{
    char name[50],stdID[10],paName[50],subName1[50],subCode1[10],subName2[50],subCode2[10],countPL;
    int credit1,credit2,totalCredit;

    printf("Name: ");
    gets(name);
    printf("Student ID: ");
    gets(stdID);
    printf("Academic Advisor: ");
    gets(paName);
    printf("Total Subject for this semester: 2");

    printf("\n\nName of Subject: ");
    gets(subName1);
    printf("Subject Code: ");
    gets(subCode1);
    printf("Credit Hours: ");
    scanf(" %d",&credit1);
    getchar();

    printf("\nName of Subject: ");
    //scanf("%s",%subName2);
    gets(subName2);
    printf("Subject Code: ");
    //scanf("%s",%subCode2);
    gets(subCode2);
    printf("Credit Hours: ");
    scanf(" %d",&credit2);
    getchar();

    totalCredit=credit1+credit2;

    printf("\n\t\t   University of Gambang\n\t\tSubjects Registration Form");
    printf("\n==================================================================");
    printf("\nName: %s",name);
    printf("\nStudent ID: %s",stdID);
    printf("\nTotal Subject: 2");
    printf("\n------------------------------------------------------------------");
    printf("\nSubject Name\t\t\tSubjectCode\t\tCredit");
    printf("\n------------------------------------------------------------------");
    printf("\n%s\t\t  %s\t\t  %d",subName1,subCode1,credit1);
    printf("\n%s\t\t  %s\t\t  %d",subName2,subCode2,credit2);
    printf("\n------------------------------------------------------------------");
    printf("\nTotal Credit: %d",totalCredit);
    printf("\n\nAcademic Advisor: %s",paName);

    return 0;

}
