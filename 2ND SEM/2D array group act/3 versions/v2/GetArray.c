// Retrieves input values from the user and populates the 2 Dimensional  array

#define ROWS 3
#define COLS 3
#include <D:2d pointers\ver 2\getValidNumber.c>

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

void GetArray(double **numbers){
    for (int i = 0; i < ROWS; i++){
        printf("%s%sROW: %d \n%s", BOLD, YELLOW, i + 1, RESET);
        for (int j = 0; j < COLS; j++){
            double input;
            printf("Enter any number for [COLUMN %d]: ", j + 1);
            input = getValidNumber(input, j);
            *(*(numbers + i) + j) = input;
        }
        printf("\n");
    }
}
