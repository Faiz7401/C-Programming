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
    struct Books book1 = {"Introduction to C","Arfian", "Computer Science", 1234};
    struct Books book2 = {"Resipi Memasak","Chef Wan", "Sajian Masakan", 2315};

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
