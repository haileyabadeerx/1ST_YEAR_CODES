float addition() {
    system("cls");

    float num1, num2, result;
    char tryAgain;

    do {
        printf("=========================");
        printf("\n\tAddition\t\n");
        printf("=========================");
        printf("\nEnter the first number: ");
        scanf("%f", &num1);
        printf("\nEnter the second number: ");
        scanf("%f", &num2);

        if (num1 == (int)num1 && num2 == (int)num2) {
            result = (int)num1 + (int)num2;
            printf("\nThe sum of %d + %d is %d.\n", (int)num1, (int)num2, (int)result);
        } else {
            result = num1 + num2;
            printf("\nThe sum of %.2f + %.2f is %.2f.\n", num1, num2, result);
        }

        printf("\nDo you want to add again? (y/n): ");
        scanf(" %c", &tryAgain);

    } while (tryAgain == 'y' || tryAgain == 'Y');
}
