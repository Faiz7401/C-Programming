#include <stdio.h>

int recursive(int,int);

int main()
{
    int x,y,n;

    printf("\nEnter number of x: ");
    scanf("%d",&x);
    printf("Enter number of y: ");
    scanf("%d",&y);
    n=recursive(x,y);
    printf("\nRecursive(%d,%d) : %d",x,y,n);
    return 0;
}

int recursive(int x, int y)
{
    if(x>y)
    {
        return (-1);
    }
    else if (x==y)
    {
        return (1);
    }
    else
    {
        return (y+recursive(x,y-2));
    }
}
