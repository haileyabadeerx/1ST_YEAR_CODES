#include <stdio.h>
#define PI 3.14159

int main(int argc, const char * argv[])
{
    int pizza;
    int diameter;
    float price;
    float area;
    float areaprice;
    char confirm;

    printf("*****DOMINO'S PIZZA MENU*****\n");
    printf("[1] 10 inches - Php178\n[2] 12 inches - Php259\n[3] 14 inches - Php314\n[4] Exit\n");


    printf("Which one would you like to order?\t");
    scanf("%d",&pizza);

    switch(pizza){
        case 1:
            {
             diameter = 10; price = 178.00;
             area = PI*((diameter/2)*(diameter/2));
             areaprice = price/area;
             printf("\nThe area of your pizza is %.2f.\n",area);
             printf("The price by the divided area is %0.2f.\n", areaprice);
             printf("This pizza isn't the least expensive.\n");
            }
            break;
        case 2:
            {
             diameter = 12; price = 259.00;
             area = PI*((diameter/2)*(diameter/2));
             areaprice = price/area;
             printf("\nThe area of your pizza is %.2f.\n",area);
             printf("The price by the divided area is %0.2f.\n", areaprice);
             printf("This pizza isn't the least expensive.\n");
            }
            break;
        case 3:
            {
             diameter = 14; price = 314.00;
             area = PI*((diameter/2)*(diameter/2));
             areaprice = price/area;
             printf("\nThe area of your pizza is %.2f.\n",area);
             printf("The price by the divided area is %0.2f.\n", areaprice);
             printf("This pizza is the least expensive.\n");
            }
            break;
        case 4:
            printf("\nThank you! Have a nice day.\n");
            break;
        default: printf("\nINVALID ENTRY!\n");
      }

    return 0;
}
