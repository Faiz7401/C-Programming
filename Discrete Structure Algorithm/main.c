#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define MAXSUBJECT 30

struct Subject{
    float score;
};

struct Student{
    char* name[30];
    char* matricID[10];
    float carrymark;
    int assessmentNumber;
    char subjectName[30];
    struct Subject subject[MAXSUBJECT];
    struct Student *ptrnext;
};

struct Student *front=NULL, *rear, *thisptr, *newptr;

void enqueue();
void dequeue();
void list();
void bubbleSort();
void swap(struct Student *a, struct Student *b);
void calculateCarryMark(struct Student *newptr);
void linearSearch();

int main(void){

    char option;
    do
    {
        printf("\n--------------STUDENT CARRY MARK CENTER------------");
        printf("\nA - Add Student"); //ENQUEUE
        printf("\nR - Remove Student"); //DEQUEUE
        printf("\nL - List All Student");
        printf("\nT - Sort Student Ascending Carry Mark");//BUBBLE SORT
        printf("\nS - Search Student"); //LINEAR SEQUENTIAL SEARCH
        printf("\nX - Exit");
        printf("\n\nEnter choice: ");
        scanf(" %c",&option);
        option = toupper(option);

        switch (option)
        {
        case 'A':
            printf("\n----------------ADD STUDENT----------------");
            enqueue();
            break;
        case 'R':
            printf("\n----------------REMOVE STUDENT----------------");
            dequeue();
            break;
        case 'L':
            printf("\n----------------LIST ALL STUDENT----------------");
            list();
            break;
        case 'T'://error///
            printf("\n----------------SORT STUDENT ASCENDING CARRY MARK----------------");
            bubbleSort();
            break;
        case 'S':
            printf("\n----------------SEARCH STUDENT----------------");
            linearSearch();
            break;
        case 'X':
            printf("\n----------------THANK YOU----------------\n");
            break;
        default:
            printf("\nWrong Input, Please Try Again!!\n");
            break;
        }
    } while (option!='X');
}

void enqueue(){
    struct Student *newptr = (struct Student*)malloc(sizeof(struct Student*));
    printf("\nEnter Name: ");
    scanf("%s",&newptr->name);
    printf("Enter Matric ID:");
    scanf("%s",&newptr->matricID);
    printf("Enter number of assessment: ");
    scanf("%d",&newptr->assessmentNumber);
    printf("Enter subject Name: ");
    scanf("%s",&newptr->subjectName);

    for (int j = 0; j < newptr->assessmentNumber; j++)
    {
        printf("Enter assessment %d score: ",(j+1));
        scanf("%f",&newptr->subject[j].score);
    }
    calculateCarryMark(newptr);

    newptr->ptrnext =NULL;

    if (front==NULL)
	{	front=newptr;
		rear=newptr;
	}

	else
	{
		rear->ptrnext=newptr;
		rear=newptr;
	}
}

void dequeue(){
    struct Student *newptr;

	thisptr = front;


	if (front==NULL)
	{
	    printf("\nEmpty list\n\n");
	    return;
	}

	else
	{
	    front=front->ptrnext;
	    free(thisptr);
	}
    list();
}

void list(){
    struct Student *temp=front;

    if (front==NULL)
    {
        printf("\nList is empty\n\n");
    }
    else
    {
        thisptr=front;
        while (thisptr!=NULL)
        {
            printf("\nName\t\t   : %s",thisptr->name);
            printf("\nMatric ID\t   : %s",thisptr->matricID);
            printf("\nAssessment Number  : %d",thisptr->assessmentNumber);
            printf("\nSubjet Name \t   : %s",thisptr->subjectName);
            printf("\nCarry Mark\t   : %.2f",thisptr->carrymark);
            printf("\n");
            thisptr = thisptr->ptrnext;
        }
    }
}

void bubbleSort(){
    int swapped;
    struct Student *firstptr;
    struct Student *secondptr = NULL;

    /* Checking for empty list */
    if (front == NULL)
        return;

    do
    {
        swapped = FALSE;
        firstptr = front;

        while (firstptr->ptrnext != secondptr)
        {
            if (firstptr->carrymark >= firstptr->ptrnext->carrymark)
            {
                swap(firstptr, firstptr->ptrnext);
                swapped = TRUE;
            }
            firstptr = firstptr->ptrnext;
        }
        secondptr = firstptr;
    }
    while (swapped==TRUE);
    list();
}


void swap(struct Student *a, struct Student *b){
    char nameTemp[30];
    char matricIDTemp[10];
    float carryMarkTemp;
    int assessmentNumberTemp;
    struct Subject subjectTemp[MAXSUBJECT];

    strcpy(nameTemp,a->name);
    strcpy(matricIDTemp,a->matricID);
    carryMarkTemp = a->carrymark;
    assessmentNumberTemp = a->assessmentNumber;
    for (int i = 0; i < a->assessmentNumber; i++)
    {
        subjectTemp[i].score = a->subject->score;
    }

    strcpy(a->name,b->name);
    strcpy(a->matricID,b->matricID);
    a->carrymark = b->carrymark;
    a->assessmentNumber = b->assessmentNumber;
    for (int i = 0; i < b->assessmentNumber; i++)
    {
        a->subject->score = b->subject->score;
    }

    strcpy(b->name,nameTemp);
    strcpy(b->matricID,matricIDTemp);
    b->carrymark = carryMarkTemp;
    b->assessmentNumber = assessmentNumberTemp;
    for (int i = 0; i < assessmentNumberTemp; i++)
    {
        b->subject->score = subjectTemp->score;
    }
}

void calculateCarryMark(struct Student *newptr){//RECURSION
    float weightCarryMark=0;
    if (newptr==NULL)
    {
        return;
    }
    else
    {
        for (int i = 0; i < newptr->assessmentNumber; i++)
        {
            weightCarryMark = weightCarryMark + (newptr->subject[i].score);

        }
        newptr->carrymark = weightCarryMark;
        calculateCarryMark(newptr->ptrnext);

        printf("\nCarry Mark\t   : %.2f",newptr->carrymark);
        printf("\n");
    }
}

void linearSearch()
{
    struct Student *newptr=front;
    char searchKeyword[10];
    int loop=0;
    int notfound=0;

	printf("\nSearch(use Name or Matric ID only )\n");
    scanf("%s",&searchKeyword);

    if (newptr==NULL){
        printf("List is Empty");
    }else {
        thisptr=front;
        while (thisptr!=NULL)
        {
            if (strcmp(searchKeyword,thisptr->matricID)==0 || strcmp(searchKeyword,thisptr->name)==0){//Search by using name or matric id
                printf("\n%s Found!",searchKeyword);
                printf("\nName\t\t: %s",thisptr->name);
                printf("\nMatric ID\t: %s",thisptr->matricID);
                printf("\nAssesment Number: %d",thisptr->assessmentNumber);
                printf("\nCarry Mark\t: %.2f",thisptr->carrymark);
                printf("\n");
                return;
            } else {
                notfound++;
            }
            loop++;
            thisptr = thisptr->ptrnext;
        }//end while

        if(loop==notfound){
            printf("\nSorry, %s not found\n",searchKeyword);
        }
    }
}
