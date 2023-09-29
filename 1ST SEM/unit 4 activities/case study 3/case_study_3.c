#include <stdio.h>

int main(int argc, const char * argv[])
{
    int num, sum = 0;
    int half;

    printf("Please enter a non-negative integer:    ");
    scanf("%d", &num);

    printf("\nFactors are:");
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d ", i);
            sum = sum + i;
        }
    }

    printf("\nSum of its factor: %d ", sum);
    half = num/2;
    printf("\nHalf of the number: %d/2 = %d",num, half);

    if (sum > half)
        printf("\n%d is a DWARF\n", num);
    else
        printf("\n%d is NOT a DWARF\n", num);

    return 0;
}

