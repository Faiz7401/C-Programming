#include <stdio.h>
#include <conio.h>

int summ(int,int);//function prototypes

int main()
{

    int i, n, summNum;

    printf("\nEnter number of i: ");
    scanf("%d",&i);
    printf("Enter number of n: ");
    scanf("%d",&n);
    summNum=summ(i,n);
    printf("\nSum numbers from %d to %d : %d",i,n,summNum);
    return 0;
}

//recursive
int summ(int i, int n)
{
    if(i>=n)//stopping recursive
    {
        return n;
    }
    else
    {
        return(i+summ(i+1,n));
    }
}
