// Displays a spinner animation during the sorting process for a specified duration

#include <stdio.h>

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

void showSortingSpinner(int durationInSeconds) {
    const char spinner[] = { '|', '/', '-', '\\' };
    int i = 0;
    int secondsPassed;
    int millisecondsPassed;

    for (secondsPassed = 0; secondsPassed < durationInSeconds; secondsPassed++) {
        for (millisecondsPassed = 0; millisecondsPassed < 100; millisecondsPassed += 20) {
            printf("%s%sSorting %c\r%s", BOLD, YELLOW, spinner[i % 4], RESET);
            fflush(stdout);
            Sleep(100);
            i++;
        }
    }
    printf("\r                \r");
    printf("%s%sSorting Complete\n\n%s", BOLD, GREEN, RESET);
}
