#include <stdio.h>
#include <math.h>

int recursive(int,int);

void main()
{
    int n,x,r;
    printf("\nEnter number of n: ");
    scanf("%d",&n);
    printf("Enter number of x: ");
    scanf("%d",&x);
    r=recursive(n,x);
    printf("\nSum numbers from %d ^ %d : %d",n,x,r);
    getch();
}

int recursive(int n,int x)
{
    if(n==0)
    {
        return 1;
    }
    else if(x==0)
    {
        return 0;
    }
    else
    {
        return(pow(x,n));
    }
}
