#include<stdio.h>
#include<string.h>

struct vegetable
{
char name[30];
float price;
};

// the main program
int main(void){
    // declare 2 structure variables
    struct vegetable veg1, veg2;

    // function prototype of type struct
    struct vegetable addname();

    // another function prototype
    int list_func(vegetable);

    // functions call for user input
    veg1 = addname();
    veg2 = addname();
    printf("\nVegetables for sale\n");
    // function call for data display...
    //list_func(veg1);
    //list_func(veg2);
    printf("End");
    return 0;
}//main

// function definitions
// This functions returns a structure
struct vegetable addname()
{
    // normal variable
    char tmp[20];

    // declare a structure variable
    struct vegetable vege;

    // Get the size of the struct
    printf("The struct vegetable size is: %d\n", sizeof(struct vegetable));
    printf("\nEnter name of vegetable: ");

    // gets(vege.name);
    gets_s(vege.name, 36);
    printf("Enter price (per 100gm): $ ");

    // gets(tmp);
    gets_s(tmp, 20);

    // converts a string to float
    vege.price = atof(tmp);
    return (vege);
}//struct vegetable addname()

// structure passed from main() to function
/*
int list_func(vegetable list)
{
    printf("\nVegetable name: %s",list.name);
    printf("\nVegetable price: $%f",list.price);
    return 0;
}//int list_func(vegetable list)
//*/
