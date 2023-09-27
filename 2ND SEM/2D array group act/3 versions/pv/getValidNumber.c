// Prompts the user for a valid number at a specific column and index in the 2D array

#define ROWS 3
#define COLS 3

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

// Formatting options
#define BOLD "\033[1m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"

double getValidNumber(int column, int index) {
    double input;

    // Check if the input is a valid number and within the specified range
    while (scanf("%lf", &input) != 1 || input >= 1000 || input < 0) {
        printf("%s%sInvalid input. Please enter a valid number (0-999).\n%s", BOLD, RED, RESET);
        scanf("%*[^\n]");
        scanf("%*c");
        printf("Enter any number for [COLUMN %d]: ", index + 1);
    }

    return input;
}
