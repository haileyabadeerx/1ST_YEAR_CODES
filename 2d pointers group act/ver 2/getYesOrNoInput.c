// Asks the user for a 'Yes' or 'No' input and returns the choice as a character

#include <stdio.h>

char getYesOrNoInput(char response) {
    char input[100];
    int isValidInput = 0;

    while (!isValidInput) {
        printf("\nEnter 'Y' for Yes or 'N' for No: ");
        gets(input);
        input[strcspn(input, "\n")] = '\0';

        // Check if the input is a single character
        if (strlen(input) == 1) {
            // Convert the input to uppercase
            input[0] = toupper(input[0]);

            // Check if the input is either 'Y' or 'N'
            if (input[0] == 'Y' || input[0] == 'N') {
                isValidInput = 1;
            }
        }
        // Check if the input is lowercase "yes"
        else if (strcasecmp(input, "yes") == 0) {
            isValidInput = 1;
            input[0] = 'Y';
        }
        // Check if the input is lowercase "no"
        else if (strcasecmp(input, "no") == 0) {
            isValidInput = 1;
            input[0] = 'N';
        }
        // Display an error message for invalid input
        if (!isValidInput) {
            printf("\033[1;31mInvalid input. Please enter either 'Y' or 'N'\033[0m");
        }
    }

    return input[0];
}
