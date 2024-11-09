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

}

//itterative
int summ(int i, int n)//function defination
{
    int total=0;
    for(i;i<=n;i++)
    {
        total=total+i;
    }
    return total;
}
