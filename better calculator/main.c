#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter your 1st digit: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter your 2nd digit: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("The answer is %f", num1 + num2);
    } else if (op == '-'){
        printf("The answer is %f", num1 - num2);
    } else if (op == '*'){
        printf("The answer is %f", num1 * num2);
    } else if (op == '/'){
        printf("The answer is %f", num1 / num2);
    } else if (op == '%'){
        printf("The answer is %f", num1 / num2);
    } else {
        printf("ERROR!!! PLEASE ENTER A VALID INPUT.");
    }


/*
    int num1;
    int num2;
    char op;

    printf("Enter your 1st digit: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter your 2nd digit: ");
    scanf("%d", &num2);

    if(op == '+'){
        printf("The answer is %d", num1 + num2);
    } else if (op == '-'){
        printf("The answer is %d", num1 - num2);
    } else if (op == '*'){
        printf("The answer is %d", num1 * num2);
    } else if (op == '/'){
        printf("The answer is %d", num1 / num2);
    } else if (op == '%'){
        printf ("The answer is %d", num1 % num2);
    } else {
        printf("ERROR!!! PLEASE ENTER A VALID INPUT.");
    }

    */
    return 0;
}
