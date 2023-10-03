#include <stdio.h>
//directories
#include <C:\Group6Calculator\addition.c>
#include <C:\Group6Calculator\subtraction.c>
#include <C:\Group6Calculator\multiplication.c>
#include <C:\Group6Calculator\division.c>
#include <C:\Group6Calculator\exit.c>

float num1, num2;

int main() {

    int choice;
    char try_again;
    float result;
    char name[80];

    printf("\t\tWelcome to Calculator Program!\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    do {

        do {
        printf("\n%s, please choose an operation: ", name);
        printf("\n\t1. Addition");
        printf("\n\t2. Subtraction");
        printf("\n\t3. Multiplication");
        printf("\n\t4. Division");
        printf("\n\t5. Exit");
        printf("\nEnter operation: ");
        scanf("%d", &choice);

        //if (choice < 1 || choice > 5)
        //printf("\nInvalid input. Please choose from 1-5 only.");

        switch(choice)
        {
            case 1: {
                addition(num1, num2);
                break;}
            case 2: {
                subtraction(num1, num2);
                break;}
            case 3:{
                multiplication(num1, num2);
                break;}
            case 4: {
                division(num1, num2);
                break;}
            case 5:{
                if (exitsure()) {
                        printf("\nExiting the calculator program...\n");
                        return 0;  // Exit the program
                }
                break; }
            default: printf("\nInvalid input. Please choose from 1-5 only.\n");
        }
        } while (choice < 1 || choice > 5);

        printf("\nDo you want to choose an operation again?");
        printf("\nType [Y] or [y] for yes, type any key for no.");
        printf("\nEnter here: " );
        scanf(" %c", &try_again);

    } while(try_again == 'Y' || try_again == 'y');

    printf("\nThank you for using our calculator program!\n");

	return 0;
}
