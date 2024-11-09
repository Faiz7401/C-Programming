#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


struct membersip{
    char nameM[10];
    char memberID[5];
    int points;
    struct membership *next;
};

struct  membership *head1,*newP;

int main(void){
    head1 = NULL;

    new_members();
    return 0;
}

void new_members(){
    int ans;
    do
    {
        newP=(struct membership *)malloc(sizeof(struct membership*));
        printf("\nEnter member name : ");
        scanf(" %s",&newP->nameM);

        printf("\nEnter member ID: ");
        scanf("%s",&newP->memberID);

        printf("\nEnter membership points: ");
        scanf("%d",&newP->points);

        if(head1==NULL){
            head1=newP;
            newP->next=NULL;
        }else{
            newP->next=head1;
            head1=newP;
        }
        printf("Do you want to add 1 more record ?(Enter 1 = yes , 0 = no) : ");
        scanf("%d",&ans);

    }while(ans==1);
}
