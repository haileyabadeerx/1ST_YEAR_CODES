// Asks the user for ascending or descending order and returns the choice as an integer

#include <stdio.h>

// Resets the formatting
#define RESET "\033[0m"

// Foreground colors
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

// Background colors
#define B_BLACK "\033[40m"
#define B_RED "\033[41m"
#define B_GREEN "\033[42m"
#define B_YELLOW "\033[43m"
#define B_BLUE "\033[44m"
#define B_MAGENTA "\033[45m"
#define B_CYAN "\033[46m"
#define B_WHITE "\033[47m"

// Formatting options
#define BOLD "\033[1m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"

int getAscendingOrDescending() {
    char input[100];

    while (1) {
        printf("ENTER [1] FOR ASCENDING OR [2] FOR DESCENDING: ");

        fflush(stdin);

        gets(input);

        // Remove the trailing newline character
        input[strcspn(input, "\n")] = '\0';

        int isNumber = 1;

        // Check if the input is a valid number
        for (int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i])) {
                isNumber = 0;
                break;
            }
        }

        // Return 1 for ascending and 2 for descending
        if (isNumber) {
            int ifAscend = atoi(input);
            if (ifAscend == 1 || ifAscend == 2) {
                return ifAscend;
            }
        }

        printf("%s%sInvalid input. Please enter a valid number.\n%s", BOLD, RED, RESET);
    }
}
