#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct stackLL{
    int data;
    struct stackLL *next;
};

struct stackLL *stackHead=NULL, *newNode, *delNode, *displayNode;

void push(int);
void pop();
void display();

int main(void){
    int choice, value;
    printf("\n:: Stack using Linked List ::\n");
    while(1){
        printf("\n****** MENU ******\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("\nWrong selection!!! Please try again!!!\n");
        }//switch
    }//while
}//main

void push(int value){
   //Create a new node using malloc function
   newNode = (struct stackLL*)malloc(sizeof(struct stackLL));
   newNode->data = value;
   //Check whether stack is Empty
   if(stackHead == NULL){
        newNode->next = NULL;
   }//if
   else{
        newNode->next = stackHead;
   }//else
    stackHead = newNode;
    printf("\nInsertion is Success!!!\n");
}//push()

void pop(){
    //Check whether stack is Empty
    if(stackHead == NULL){
        printf("\nStack is Empty!!!\n");
    }//if
    else{
        delNode = stackHead;
        printf("\nDeleted element: %d", delNode->data);
        stackHead = delNode->next;
        free(delNode);
    }//else
}//pop()

void display(){
    //Check whether stack is Empty
    if(stackHead == NULL){
        printf("\nStack is Empty!!!\n");
    }//if
   else{
        displayNode = stackHead;
        while(displayNode->next != NULL){
            printf("%d--->",displayNode->data);
            displayNode = displayNode -> next;
        }//while
        printf("%d--->NULL",displayNode->data);
    }//else
}//display()
