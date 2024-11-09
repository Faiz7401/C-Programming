 #include <stdio.h>
#include <stdlib.h>

struct house_owner
{
    char name[20];
    char address[30];
    struct unit
    {
        int current_unit;
        int previous_unit;
        int used_unit;
    }elect,water;

    struct bill
    {
        float bill,discountBill;
    }e,w;

    float totalBill;
    float dBill;
};

//function declaration
int getInfo();
float calculateBill(struct house_owner house);
float calculateTotalBillsAfterDiscount(struct house_owner *house);
void display(struct house_owner house[]);

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

//get information about house owner
int getInfo()
{
    for(int i =0;i<3;i++)
    {
        printf("\nEnter House Owner Name: ");
        scanf("%s",&house[i].name);
        printf("Enter House Address: ");
        scanf("%s",&house[i].address);
        printf("Enter Current Unit for Electric: ");
        scanf("%d",&house[i].elect.current_unit);
        printf("Enter Previous Unit for Electric: ");
        scanf("%d",&house[i].elect.previous_unit);
        printf("Enter Current Unit for Water: ");
        scanf("%d",&house[i].water.previous_unit);
        printf("Enter Previous Unit for Water: ");
        scanf("%d",&house[i].water.previous_unit);
    }
}

//calculate bill
float calculateBill(struct house_owner *house)
{
    int i;
    //calculation  for electrical bill
    house[i].elect.used_unit = house[i].elect.current_unit - house[i].elect.previous_unit;

    if(house[i].elect.used_unit < 100)
    {
        house[i].e.bill = house[i].elect.used_unit * 0.1;
    }
    else if(house[i].elect.used_unit>=100 && house[i].elect.used_unit<200)
    {
        house[i].e.bill = house[i].elect.used_unit * 0.2;
    }
    else
    {
        house[i].e.bill = house[i].elect.used_unit * 0.4;
    }

    //calculation for water bill
    house[i].water.used_unit = house[i].water.current_unit - house[i].water.previous_unit;

    if(house[i].water.used_unit < 20)
    {
        house[i].w.bill = house[i].water.used_unit * 0.5;
    }
    else
    {
        house[i].w.bill = house[i].water.used_unit * 1;
    }


    house[i].totalBill = house[i].e.bill + house[i].w.bill;
}

//calculation for after discount
float calculateTotalBillsAfterDiscount(struct house_owner *house)
{
    int i;

    if(house[i].e.bill<100)
    {
        house[i].e.discountBill = house[i].e.bill - (house[i].e.bill*0.2);
    }
    else
    {
        house[i].e.discountBill = house[i].e.bill - (house[i].e.bill*0.1);
    }

    if(house[i].w.bill<10)
    {
        house[i].w.discountBill = house[i].w.bill - (house[i].w.bill*0.2);
    }
    else
    {
        house[i].w.discountBill = house[i].w.bill - (house[i].w.bill*0.1);
    }

    house[i].dBill = house[i].e.discountBill + house[i].w.discountBill;

    return house[i].dBill;
}


//print output
void display(struct house_owner house[])
{
    for(int i =0;i<3;i++)
    {
        printf("\t\t\nHOUSE BILL REPORT");
        printf("\nHouse Owner Name : %s",house[i].name);
        printf("\nHouse Owner Name : %s",house[i].address);
        printf("\nHouse Owner Name : %0.2f",house[i].e.bill);
        printf("\nHouse Owner Name : %0.2f",house[i].w.bill);
        printf("\nHouse Owner Name : %0.2f",house[i].totalBill);
        printf("\nHouse Owner Name : %0.2f",house[i].dBill);
    }
}
