#include<stdio.h>

int main ()
{
    char selectedPackage;
    int packagePrice,continueUser;

    do
        {
            printf("Choose your package : ");
            scanf("%c", &selectedPackage);

            if(selectedPackage == 'A'){
                packagePrice=500;
            }
            else if(selectedPackage == 'B'){
                packagePrice=350;
            }
            else if(selectedPackage == 'C'){
                packagePrice=450;
            }
            else if(selectedPackage == 'D'){
                packagePrice=300;
            }
            else if(selectedPackage == 'E'){
                packagePrice=800;
            }

            printf("Selected Package : %c", selectedPackage);
            printf("\nPackage price : %d", packagePrice);

            printf("\n\nContinue for next user: 1, Exit: 2\t\t: ");
            scanf("%d",&continueUser);
            fflush(stdin);

        }
        while (continueUser=1);

    return 0;
}
