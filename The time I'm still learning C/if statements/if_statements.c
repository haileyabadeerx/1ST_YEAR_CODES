#include <stdio.h>
#include <stdlib.h>
/*
double max(double digit1, double digit2){
    double result;
    if(digit1 > digit2){
        result = digit1;
    } else {
        result = digit2;
    }
    return result;
}

int main()
{
    printf("%f", max(69.0,9.0));

    return 0;
}
*/

/* WITH 3 NUMBERS */
double max(double digit1, double digit2, double digit3){
    double result;
    if(digit1 >= digit2 && digit1 >= digit3){
        result = digit1;
    } else if(digit2 >= digit1 && digit2 >= digit3){
        result = digit2;
    } else {
        result = digit3;
    }
    return result;
}

int main()
{
    if(3 > 1 || 6 == 5){
        printf("True");
    } else {
    printf("False");
    }

    return 0;
}
