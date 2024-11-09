#include <stdio.h>
#include <stdlib.h>

//structure declaration
struct unit
{
    int c_u;//current unit
    int p_u;//previous unit
    int u_u;//used unit
};

struct bill
{
    float b;//bill for each bill
    float db;//discount for each bill
};

struct house_owner
{
    char n[20];//name of the user
    char ad[30];//address of user
    struct unit el;//unit for electric
    struct unit wt;//unit for water
    struct bill e;//bill for electric
    struct bill w;//bill for water
    float tb;//total bill before discount
    float totalBill;//total bill after discount
};

//function declaration
struct house_owner getInfo();
struct house_owner calculateBill(struct house_owner house);
float calculateTotalBillsAfterDiscount(struct house_owner house);
void display(struct house_owner house[]);

//main function
int main()
{
    struct house_owner house[3];

    for(int i=0;i<3;i++)
    {
        house[i]=getInfo();
        house[i]=calculateBill(house[i]);
        house[i].totalBill=calculateTotalBillsAfterDiscount(house[i]);
    }
        display(house);
}

// function for get information from customer
struct house_owner getInfo()
{
    struct house_owner house;

        printf("Enter House Owner Name: ");
        scanf("%s",&house.n);
        printf("Enter House Address: ");
        fflush(stdin);
        gets(house.ad);
        printf("Enter Current Unit for Electric: ");
        scanf("%d",&house.el.c_u);
        printf("Enter Previous Unit for Electric: ");
        scanf("%d",&house.el.p_u);
        printf("Enter Current Unit for Water: ");
        scanf("%d",&house.wt.c_u);
        printf("Enter Previous Unit for Water: ");
        scanf("%d",&house.wt.p_u);
        printf("\n");

        return house;
}

//bill calculation
struct house_owner calculateBill(struct house_owner house)
{
//calculation  for electrical bill
    house.el.u_u = house.el.c_u - house.el.p_u;

    if(house.el.u_u < 100)
    {
        house.e.b = house.el.u_u * 0.1;
    }
    else if(house.el.u_u>=100 && house.el.u_u<200)
    {
        house.e.b = house.el.u_u * 0.2;
    }
    else
    {
        house.e.b = house.el.u_u * 0.4;
    }

    //calculation for water bill
    house.wt.u_u = house.wt.c_u - house.wt.p_u;

    if(house.wt.u_u < 20)
    {
        house.w.b = house.wt.u_u * 0.5;
    }
    else
    {
        house.w.b = house.wt.u_u * 1;
    }


    house.tb = house.e.b + house.w.b;

    return house;
}

//calculation for bill after descount
float calculateTotalBillsAfterDiscount(struct house_owner house)
{
    //electric
    if(house.e.b<100)
    {
        house.e.db = house.e.b - (house.e.b*0.2);
    }
    else
    {
        house.e.db = house.e.b - (house.e.b*0.1);
    }

    //water
    if(house.w.b<10)
    {
        house.w.db = house.w.b - (house.w.b*0.2);
    }
    else
    {
        house.w.db = house.w.b - (house.w.b*0.1);
    }

    return (house.e.db + house.w.db);

}

//function for output customer bill details
void display(struct house_owner house[])
{
    printf("\t\t\nHOUSE BILL REPORT");

    for(int i =0;i<3;i++)
    {
        printf("\nHouse Owner Name : %s",house[i].n);
        printf("\nHouse Address : %s",house[i].ad);
        printf("\nElectric Bill : RM%0.2f",house[i].e.b);
        printf("\nWater Bill : RM%0.2f",house[i].w.b);
        printf("\nTotal Bill : RM%0.2f",house[i].tb);
        printf("\nTotal bills after discount : RM%0.2f",house[i].totalBill);
        printf("\n");
    }
}
