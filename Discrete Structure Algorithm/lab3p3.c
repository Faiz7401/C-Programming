#include <stdio.h>
#include <conio.h>

struct subjects
{
    float marks;
};

struct examination_results
{
    char id[10];
    char name[30];
    char classroom[20];
    struct subjects BM;
    struct subjects BI;
    struct subjects Maths;
    struct subjects Science;
};

void display(struct examination_results data);
float calculate_marks(struct examination_results data);

int main()
{
    struct examination_results myInfo;
    float total;

    printf("ID : ");
    scanf("%s",&myInfo.id);
    printf("Name : ");
    scanf("%s",&myInfo.name);
    printf("Classroom : ");
    scanf("%s",&myInfo.classroom);
    printf("Subject mark for BM : ");
    scanf("%f",&myInfo.BM.marks);
    printf("Subject mark for BI : ");
    scanf("%f",&myInfo.BI.marks);
    printf("Subject mark for Maths : ");
    scanf("%f",&myInfo.Maths.marks);
    printf("Subject mark fir Science : ");
    scanf("%f",&myInfo.Science.marks);

    display(myInfo);
    total = calculate_marks(myInfo);

    printf("\nThe total mark : %.2f\n",total);

    return 0;
}
float calculate_marks(struct examination_results data)
{
    float total = 0;

    total = data.BM.marks + data.BI.marks + data.Maths.marks + data.Science.marks;

    return total;
}
void display(struct examination_results data)
{
    printf("\n************ Examination Results *************");
    printf("\nID : %s",data.id);
    printf("\nName : %s",data.name);
    printf("\nClassroom : %s",data.classroom);
    printf("\nSubject mark for BM : %.2f",data.BM.marks);
    printf("\nSubject mark for BI : %.2f",data.BI.marks);
    printf("\nSubject mark for Maths : %.2f",data.Maths.marks);
    printf("\nSubject mark fir Science : %.2f",data.Science.marks);
    printf("\n********* End of Examination Results **********");
}
