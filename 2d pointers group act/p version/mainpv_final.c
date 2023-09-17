/*
Group 3: Bubble Sorting using Pointer pointer version
Members:
Agad, Jiro Laurenz
Alpornon, Christine Julia
Bacolod, Mikaila Jhay
Buga-ay, Carl Tristan
Cheng, Xian Hui
Del Rosario, Kyle Ferell
Edusma, Marie Cris
Esteban, Anthony James
Miguel, Rafael Louie
Modelo, John Vincent
Mortel, Meg Edelviese
Orde, Cyrus Jezter
Pascual, Ian Nevri
Robles, Aira Mae
Rosarda, Jeroises Israel
Sebastian, Brian May
*/

#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <C:\2d pointers\p version\BubbleSortRows.c>
#include <D:\2d pointers\p version\BubbleSortWhole.c>
#include <C:\2d pointers\p version\GetArray.c>
#include <C:\2d pointers\p version\printBoard.c>
#include <D:\2d pointers\p version\showSortingSpinner.c>
#include <C:\2d pointers\p version\showLoadingSpinner.c>
#include <D:\2d pointers\p version\getAscendingOrDescending.c>
#include <C:\2d pointers\p version\getYesOrNoInput.c>

#define ROWS 3
#define COLS 3
#define DURATION 5

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

// Function prototype
void BubbleSortRows(double *p, int ifAscend);
void BubbleSortWhole (double *p, int ifAscend);
void GetArray(double *p);
void printBoard(double *p);
void showSortingSpinner(int durationInSeconds);
void showLoadingSpinner(int durationInSeconds);
int getAscendingOrDescending();
double getValidNumber(int column, int index);
char getYesOrNoInput(char response);

int i, j, k;

int main()
{

    char tryAgain;

    do{
        // Dynamic memory allocation for the numbers array
        double **numbers = (double**)malloc(ROWS * sizeof(double*));
        int ifAscend;
        for (i = 0; i < ROWS; i++)
            *(numbers + i) = (double*)malloc(COLS * sizeof(double));

        double *p = numbers[0];


        printf("\n");
        printf("==========================================\n");
        printf("||");
        printf("%s 2d Array Sorter: Bubble Sort Edition %s", MAGENTA, RESET);
        printf("||\n");
        printf("==========================================\n\n");

        GetArray(p);

        printf("============================================================\n\n");

        ifAscend = getAscendingOrDescending();

        printf("%s%sYou entered: %s \n%s", BOLD, GREEN, ifAscend == 1 ? "Ascending" : "Descending", RESET);
        printf("\nPlease enter any key to continue.\n");
        getch();

        printf("\n%s%s<== BEFORE SORTING ==>\n%s", BOLD, GREEN, RESET);
        printBoard(p);

        printf("\n============================================================\n\n");

        // Show spinner animation for sorting duration
        setbuf(stdout, NULL);
        showSortingSpinner(DURATION);

        printf("%s%s<== AFTER SORTING ==>\n%s", BOLD, GREEN, RESET);

        // Perform per row sorting and print the board
        printf("\n1. Per Row Sorting: \n");
        BubbleSortRows(p, ifAscend);
        printBoard(p);

        // Perform whole board sorting and print the board
        printf("\n2. Whole Board Sorting: \n");
        BubbleSortWhole(p, ifAscend);
        printBoard(p);

        printf("\n============================================================\n");
        printf("\nTry Again? ");
        tryAgain = getYesOrNoInput(tryAgain);

        printf("%s%sValid Input: %s \n%s", BOLD, GREEN, tryAgain == 'Y' ? "Trying again" : "Exit", RESET);


        showLoadingSpinner(DURATION);
        printf("\n\nPlease enter any key to continue.\n");
        getch();

        if(tryAgain == 'Y'){
            free(numbers);
            system("cls");
        }

    }while(tryAgain == 'Y');

    printf("\n============================================================\n\n");
    printf("%sThank you for using the Program!\n%s", MAGENTA, RESET);
    getch();
}


