#include<stdio.h>
#include<string.h>

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main(void){
    struct Books book1, book2;

    printf("\nBook 1");
    printf("\nEnter title : ");
    scanf("%s",&book1.title);
    printf("Enter author : ");
    scanf("%s",&book1.author);
    printf("Enter subject : ");
    scanf("%s",&book1.subject);
    printf("Enter book id : ");
    scanf("%d",&book1.book_id);

    printf("\nBook 2");
    printf("\nEnter title : ");
    scanf("%s",&book2.title);
    printf("Enter author : ");
    scanf("%s",&book2.author);
    printf("Enter subject : ");
    scanf("%s",&book2.subject);
    printf("Enter book id : ");
    scanf("%d",&book2.book_id);

    printf("\Book 1.");
    printf("\nID = %s",book1.title);
    printf("\nName = %s",book1.author);
    printf("\nName = %s",book1.subject);
    printf("\nName = %d",book1.book_id);

    printf("\n\nBook 2.");
    printf("\nID = %s",book2.title);
    printf("\nName = %s",book2.author);
    printf("\nName = %s",book2.subject);
    printf("\nName = %d",book2.book_id);
}//main

