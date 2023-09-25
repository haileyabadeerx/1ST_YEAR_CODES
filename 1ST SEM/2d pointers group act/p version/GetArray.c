// Retrieves input values from the user and populates the 2-dimensional array

#include <D:\2d pointers\p version\getValidNumber.c>
#define ROWS 3
#define COLS 3

// Resets the formatting
#define RESET "\033[0m"

// Formatting options
#define BOLD "\033[1m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"

// Foreground colors
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

void GetArray(double *p) {
    for (int i = 0; i < ROWS; i++) {
        printf("%s%sROW: %d \n%s", BOLD, YELLOW, i + 1, RESET);
        for (int j = 0; j < COLS; j++) {
            double input;
            printf("Enter any number for [COLUMN %d]: ", j + 1);
            input = getValidNumber(input, j);
            *(p + i * COLS + j) = input;
        }
        printf("\n");
    }
}
