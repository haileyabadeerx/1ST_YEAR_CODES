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

// Displays a loading spinner animation for a specified duration
void showLoadingSpinner(int durationInSeconds) {
    const char spinner[] = { '|', '/', '-', '\\' };
    int i = 0;
    int secondsPassed;
    int millisecondsPassed;
    for (secondsPassed = 0; secondsPassed < durationInSeconds; secondsPassed++) {
        for (millisecondsPassed = 0; millisecondsPassed < 100; millisecondsPassed += 20) {
            printf("%s%sLoading %c\r%s", BOLD, YELLOW, spinner[i % 4], RESET);
            fflush(stdout);
            Sleep(100);
            i++;
        }
    }
    printf("\r                \r");
    printf("%s%sProceed%s", BOLD, GREEN, RESET);
}
