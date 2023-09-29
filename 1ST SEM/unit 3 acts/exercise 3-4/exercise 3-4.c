#include <stdio.h>

int main(int argc, const char * argv[])
{
    float a,b,c,d,price;

    printf("Enter the amount of Candy A:\t");
    scanf("%f",&a);

    printf("Enter the amount of Candy B:\t");
    scanf("%f",&b);

    printf("Enter the amount of Candy C:\t");
    scanf("%f",&c);

    printf("Enter the amount of Candy D:\t");
    scanf("%f",&d);

    a = a * 35;
    b = b * 45;
    c = c * 56;
    d = d * 57.50;
    price = a + b + c + d;

    printf("\nCandy A: %.2f\t\tCandy B: %.2f\t\tCandy C: %.2f\t\tCandy D: %.2f\t\n",a,b,c,d);
    printf("\nThe total price of the candies will be Php %.2f\n",price);

    return 0;
}
