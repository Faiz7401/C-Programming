#include <stdio.h>
#include <stdlib.h>

struct customer
{
    char n[30];//variable for customer name
    char id[5];//variable for customer id
    float total;
    struct point
    {
        int c_p;//variable for customer current point
        int r_p;//variable for point redemption
        int u_p;//updated point
        int a_p;//additional point after purchase
    }p;
    struct item
    {
        char cd;//variable for item code
        float pr;//variable for item price
        float dv;//discount value
    }i[10];
};

struct customer getInput();
float totalPurchase(struct customer a);
struct customer redeemPoint(struct customer b);
void display(struct customer d[]);

int main()
{
    struct customer c[3];

    for(int i=0;i<3;i++)
    {
        c[i]=getInput();
        c[i].total=totalPurchase(c[i]);
        c[i]=redeemPoint(c[i]);
    }
    display(c);
}

struct customer getInput()
{
    struct customer c;

    printf("\nInsert Customer Info\n");
    printf("Enter Customer Name : ");
    scanf("%s",&c.n);
    printf("Enter Customer Id : ");
    scanf("%s",&c.id);
    printf("Enter Customer Current Point : ");
    scanf("%d",&c.p.c_p);

    return c;
}

float totalPurchase(struct customer a)
{
    int k=1;//purchase more item
    a.total=0;

    printf("\nPURCHASE ELECTRICAL ITEMS\n");
    for(int j=0;j<10;j++)
    {
        printf("Enter item code : ");
        scanf("%s",&a.i[j].cd);
        printf("Enter item price : ");
        scanf("%f",&a.i[j].pr);
        fflush(stdin);

        //determine discount item discount value
        if(a.i[j].pr>=250 && a.i[j].pr<750)
            a.i[j].dv=a.i[j].pr*0.03;
        else if(a.i[j].pr>=750 && a.i[j].pr<1000)
            a.i[j].dv=a.i[j].pr*0.05;
        else if(a.i[j].pr>=1000)
            a.i[j].dv=a.i[j].pr*0.1;
        else
            a.i[j].dv=a.i[j].pr;

        //calculate total purchase
        a.total=a.total+(a.i[j].pr-a.i[j].dv);


        printf("\nItem price : %s",a.i[j].cd);
        printf("\nItem discounted value : %0.2f",a.i[j].dv);
        printf("\nTotal Purchase : %0.2f",a.total);

        printf("\n\nPurchase more items?(Yes = 1, No = 0)");
        scanf("%d",&k);

        if(k==0)
        {
            break;
        }
    }

    return a.total;
}

struct customer redeemPoint(struct customer b)
{
    printf("\nPOINT REDEMPTION\n");
    printf("Enter point to redeem(must not exceed the current point) : ");
    scanf("%d",&b.p.r_p);

    //calculate additional point
    b.p.a_p=b.total/10;
    //calculate update point
    b.p.u_p=b.p.c_p+b.p.a_p-b.p.r_p;

    return b;
}

void display(struct customer d[])
{
    printf("\n***********************************************************\n\nDISPLAY OUTPUTS\n");

    for(int i=0;i<3;i++)
    {
        printf("\nDisplay Customer %d Points \n",i+1);
        printf("Customer Name : %s\n", d[i].n);
        printf("Customer Id : %s\n",d[i].id);
        printf("Updated Point : %d\n", d[i].p.u_p);
    }
}
