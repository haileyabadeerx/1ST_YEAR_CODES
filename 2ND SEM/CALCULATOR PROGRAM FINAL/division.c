float division() {
    system("cls");

    float num1, num2, result;
    char tryAgain;

    do {
        printf("=========================");
        printf("\n\tDivision\t\n");
        printf("=========================");
        printf("\nEnter the dividend: ");
        scanf("%g", &num1);
        printf("\nEnter the divisor: ");
        scanf("%g", &num2);

        if (num2 != 0) {
            result = num1 / num2;
            //remainder = fmod(num1, num2);
            printf("\nThe quotient of %.2f / %.2f is %.2f", num1, num2, result);
        } else {
            printf("\nError: Division by zero is not allowed.\n");
        }

        printf("\nDo you want to divide again? (y/n): ");
        scanf(" %c", &tryAgain);
    } while (tryAgain == 'y' || tryAgain == 'Y');
}







/*

if (num1 == (int)num1 && num2 == (int)num2 && num2 != 0) {
            result = (int)num1 / (int)num2;
           // remainder = (int)num1 % (int)num2;
            printf("\nThe quotient of %d / %d is %g.\n", (int)num1, (int)num2, result);
        } else if (num2 != 0) {
            result = num1 / num2;
            //remainder = fmod(num1, num2);
            printf("\nThe quotient of %.2f / %.2f is %.2f with the remainder of %.2f\n", num1, num2, result, remainder);
        } else {
            printf("\nError: Division by zero is not allowed.\n");
        }
        */
