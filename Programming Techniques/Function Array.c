#include <stdio.h>
// 1. function declaration
int displayArray (int num[5]);
int displayArray2 (int integer[5]);
void main ()
{
    int array[]={10,20,30,40,50};
    int array2[]={100,200,300,400,500};

    //2. Function Call
    displayArray(array);
    displayArray2(array2);

}

//3. Function Definition/Body
int displayArray(int num[5])
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("Array %d: %d\n",i+1,num[i]);
    }
}

int displayArray2 (int integer[5])
{
    int n;
    for (n=0;n<5;n++)
    {
        printf("\nArray %d: %d",n+1,integer[n]);
    }
    printf("\n");
}
