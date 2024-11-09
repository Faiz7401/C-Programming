/*
Chapter 4-Array

Term
-Elemental
-Index
-1D Array
-2D Array

1) Declaration of Array
Datatype/typespecifier Array_name [array_size]

2) Intialize Array
-Compile Time
-Run Time

3)Input Output Array

4) Passing Array to function

*/
#include <stdio.h>

void main()
{
    /*
    - declaration of array
    - Datatype/typespecifier Array_name [array_size]
    */

    int x[5],i;
    // intialize array - compilr time
    x[0]=1;
    x[1]=3;
    x[2]=5;

    //runtime
    printf("Please enter the value of element 4: ");
    scanf("%d",&x[3]);

    printf("Please enter the value of element 5: ");
    scanf("%d",&x[4]);

    /*display/output array
    -Method  1
    */
    printf("\nElement 1: %d",x[0]);
    printf("\nElement 2: %d",x[1]);
    printf("\nElement 3: %d",x[2]);
    printf("\nElement 4: %d",x[3]);
    printf("\nElement 5: %d\n",x[4]);

    /*
    -Method 2
    */
    printf("\nNew Array");
    int y[5]={10,20,30,40,50};
    for (i=0;i<5;i++)
    {
        printf("\nElement [%d]: %d",i+1,y[i]);
    }
    printf("\n");
}
