#include <stdio.h>
#include <stdlib.h>

int calculate_discount(float d[5][1], int nT[5][1]);
//int calculate_postage(char dest[5][12], float pF[5][1], int nT[5][1]);

int main(){
    char custID[5][5]={"C1001","C1002","C1003","C1004","C1005"};
    char destination[5][12] = {"SEMENANJUNG","SEMENANJUNG","SEMENANJUNG","SABAH","SARAWAK"};
    int numTshirt[5][1]={5,10,13,20,30};
    int i, j;
    float discount[5][1], price[5][1], totalPrice[5][1], postFare[5][1], totalFare[5][1], totalSales[5][1], overallPrice=0;

    for(i = 0; i<5; i++){// calculation total price w/o discount
            for(j = 0; j<1; j++){
                    price[i][j]=numTshirt[i][j]*50;
            }
    }

    discount[5][1] = calculate_discount(discount, numTshirt);// calling function discount

    for(i = 0; i<5; i++){// calculation total price w discount
            for(j = 0; j<1; j++){
                    totalPrice[i][j]=price[i][j]-(price[i][j]*(discount[i][j]/100));
            }
    }

    //postFare[5][1] = calculate_postage(destination ,postFare, numTshirt);// calling function for postage

    /*for(i = 0; i<5; i++){//total price after postage
            for(j = 0; j<1; j++){
                    totalFare[i][j]=totalPrice[i][j]+postFare[i][j];
            }
    }

    for(i = 0; i<5; i++){// sum for total price
            for(j = 0; j<1; j++){
                    overallPrice = overallPrice+totalFare[i][j];
            }
    }*/

    printf("SALES RECORD");
    printf("\nCustomer_ID\tT-Shirt \tDiscount\tTotal_Price\tDestination\tPostage_Fare\tTotal_Fare");
    printf("\n--------------------------------------------------------------------------------------------------------------");
    for(i = 0; i<5; i++){
            for(j = 0; j<5; j++){
                    printf("\n%s",custID[i][j]);
            }
            for(j = 0; j<1; j++){
                    printf("\t\t%d",numTshirt[i][j]);
                    printf("\t\t%0.2f",discount[i][j]);
                    printf("\t\t%0.2f",totalPrice[i][j]);

            //for(j = 0; j<12; j++){
            //        printf("\t\t%s",destination[i][j]);
            //}

            for(j = 0; j<1; j++){
                    printf("\t\t%0.2f",postFare[i][j]);
                    printf("\t\t%0.2f",totalFare[i][j]);
            }
    }
    printf("\n--------------------------------------------------------------------------------------------------------------");
   // printf("\nTotal Sales: \t\t\t\t\t\t\t\t\t\t\t%0.2f",overallPrice);
    printf("\n--------------------------------------------------------------------------------------------------------------");
    }
    return 0;
}

int calculate_discount(float d[5][1], int nT[5][1] ){
    int i, j;
    for(i = 0; i<5; i++){
            for(j = 0; j<1; j++){
                    if (nT[i][j]<=5)
                    {
                            d[i][j] = 0;
                    }
                    else if (nT[i][j]>5 && nT[i][j]<11)
                    {
                            d[i][j] = 5;
                    }
                    else if (nT[i][j]>10 && nT[i][j]<21)
                    {
                            d[i][j] = 10;
                    }
                    else if (nT[i][j]>15 && nT[i][j]<31)
                    {
                            d[i][j] = 20;
                    }
                    else{
                            d[i][j]= 30;
                    }
            }
    }
    return d[5][1];
}

/*int calculate_postage(char dest[5][12], float pF[5][1], int nT[5][1]){
    int i, j;
    for(i = 0; i<5; i++){
            for(j = 0; j<1; j++){
                    if (dest[i][j]=="SEMENANJUNG")
                    {
                            pF[i][j] = nT[i][j]*3;
                    }
                    else{
                            pF[i][j] = nT[i][j]*8;
                    }
            }
    }
    return pF[5][1];
}*/
