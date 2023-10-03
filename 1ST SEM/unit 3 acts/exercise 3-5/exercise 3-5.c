#include <stdio.h>

int main(int argc, const char * argv[])
{
    float E,M,J;

    printf("Enter your weight on Earth in pounds:\t");
    scanf("%f",&E);

    M = (E * 38)/100;
    J = (E * 264)/100;

    printf("\nYour weight on Mars will be %.2f.",M);
    printf("\nYour weight on Jupiter will be %.2f.\n",J);

    return 0;
}
