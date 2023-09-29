#include <math.h>

float division() {
    system("cls");

    float num1, num2, result, remainder;
    char tryAgain;

    do {
        printf("=========================");
        printf("\n\tDivision\t\n");
        printf("=========================");
        printf("\nEnter the dividend: ");
        scanf("%f", &num1);
        printf("\nEnter the divisor: ");
        scanf("%f", &num2);

        if (num1 == (int)num1 && num2 == (int)num2 && num2 != 0) {
            result = (int)num1 / (int)num2;
            remainder = (int)num1 % (int)num2;
            printf("\nThe quotient of %d / %d is %d with the remainder of %d.\n", (int)num1, (int)num2, (int)result, (int)remainder);
        } else if (num2 != 0) {
            result = num1 / num2;
            //remainder = fmod(num1, num2);
            printf("\nThe quotient of %.2f / %.2f is %.2f with the remainder of %.2f\n", num1, num2, result, remainder);
        } else {
            printf("\nError: Division by zero is not allowed.\n");
        }

        printf("\nDo you want to divide again? (y/n): ");
        scanf(" %c", &tryAgain);
    } while (tryAgain == 'y' || tryAgain == 'Y');
}
