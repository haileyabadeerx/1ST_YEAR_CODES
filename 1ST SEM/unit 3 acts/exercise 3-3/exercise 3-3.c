#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a,b,c,sum,diff,prod,quot,sumsq;

    printf("Enter three numbers:\t");
    scanf("%d %d %d", &a,&b,&c);

    sum = a + b + c;
    diff = a - b - c;
    prod = a * b * c;
    sumsq = (a*a)+(b*b)+(c*c);

    printf("\nThe sum is %d.",sum);
    printf("\nThe difference is %d.",diff);
    printf("\nThe product is %d.",prod);
    printf("\nThe quotient is %d.",quot);
    printf("\nThe sum of squares is %d.\n",sumsq);

    return 0;
}
