#include <stdio.h>
#include <math.h>

int power(int,int);

void main()
{
    int n,m,r;
    printf("\nEnter number of n: ");
    scanf("%d",&n);
    printf("Enter number of m: ");
    scanf("%d",&m);
    r=power(n,m);
    printf("\nSum numbers from %d ^ %d : %d",n,m,r);
    getch();
}

int power(int n,int m)
{
    int pow=1;
    if(m<1)
    {
        return pow;
    }
    else
    {
        return pow*power(n,m--);
    }

}
