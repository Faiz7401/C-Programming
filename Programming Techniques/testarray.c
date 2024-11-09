#include <stdio.h>

int main()
{
 int row=5;
 int tarrifBlock[5]={200,100,300,300,900};
 int proRate[5];
 float rate[5]={0.218,0.334,0.516,0.546,0.571};

 float amount[5],consumption,totalBill;
 int i;

 printf("Enter consumption: ");
 scanf("%f",&consumption);

 if(consumption <= 200){
    proRate[0]=consumption;
    proRate[1]=0;
    proRate[2]=0;
    proRate[3]=0;
    proRate[4]=0;
 }
 else if(consumption >200 && consumption <=300){
    proRate[0]=200;
    proRate[1]=consumption-200;
    proRate[2]=0;
    proRate[3]=0;
    proRate[4]=0;
 }
 else if(consumption >300 && consumption <=600){
    proRate[0]=200;
    proRate[1]=100;
    proRate[2]=consumption-300;
    proRate[3]=0;
    proRate[4]=0;
 }
 else if(consumption >600 && consumption <=900){
    proRate[0]=200;
    proRate[1]=100;
    proRate[2]=300;
    proRate[3]=consumption-600;
    proRate[4]=0;
 }
 else{
    proRate[0]=200;
    proRate[1]=100;
    proRate[2]=300;
    proRate[3]=300;
    proRate[4]=consumption-900;
 }

 for(i=0;i<5;i++){
        amount[i]=rate[i]*proRate[i];
        totalBill=totalBill+amount[i];
 }


 printf("\n-----------------------------------------------------------------------------------");
 printf("\nHow do we calculate?");
 printf("\n-----------------------------------------------------------------------------------");
 printf("\nTariff Block(kWh)\tProrate Block(kWh)\tRate(RM)\tAmount(RM)");
 for(i=0;i<row;i++){
    printf("\n\t%d\t\t\t%d\t\t %0.3f\t\t  %0.2f",tarrifBlock[i],proRate[i],rate[i],amount[i]);
 }
 printf("\n-----------------------------------------------------------------------------------");
 printf("\nTotal\t\t\t\t%0.0f\t\t\t\t  %0.2f",consumption,totalBill);
 printf("\n-----------------------------------------------------------------------------------");
 return 0;
}
