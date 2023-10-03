#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 4

struct Seat {
    int row;
    char column;
    int occupied;
};

void displaySeats(struct Seat seats[ROWS][COLS]) {
    printf("\tAvailable Seats:\n\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%d ", seats[i][0].row); // Print the row number only once
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j].occupied)
                printf("\tX");
            else
                printf("\t%c", seats[i][j].column);
        }
        printf("\n");
    }
    printf("\n");
}

void SeatChoice(int* row, char* column) {
    printf("Select your desired seat (row column) e.g. Row 1 Column A -> 1A\nYour choice: ");
    scanf("%d %c", row, column);
    getchar();
    system("cls");
}

int main() {
    struct Seat seats[ROWS][COLS];

    // Initialize seats
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j].row = i + 1;
            seats[i][j].column = 'A' + j;
            seats[i][j].occupied = 0;
        }
    }

    int seatsAssigned = 0;
    char book;
	char name[80];

    printf("<<< Welcome to Hail Airlines! >>>\n\n");
	printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("\nHello, %sWe are delighted to have you on board.\n\n", name);

    do {
        displaySeats(seats);

        int row;
        char column;

        SeatChoice(&row, &column);

        int rowIndex = row - 1;
        int columnIndex = column - 'A';

        while (rowIndex < 0 || rowIndex >= ROWS || columnIndex < 0 || columnIndex >= COLS ||
               seats[rowIndex][columnIndex].occupied) {
            if (rowIndex < 0 || rowIndex >= ROWS || columnIndex < 0 || columnIndex >= COLS) {
                printf("Invalid seat choice. Please enter a valid seat choice.\n\n");
                displaySeats(seats);
            }
            else {
                printf("Seat is already occupied. Please choose a different seat.\n\n");
                displaySeats(seats);
            }

            SeatChoice(&row, &column);

            rowIndex = row - 1;
            columnIndex = column - 'A';
        }

        seats[rowIndex][columnIndex].occupied = 1;
        seatsAssigned++;
        printf("Seat booked successfully.\n");

        displaySeats(seats);
        printf("Would you like another transaction? (Y/N) ");
        scanf(" %c", &book);
        system("cls");

    } while ((book == 'Y' || book == 'y') && seatsAssigned < ROWS * COLS);

    if (seatsAssigned == ROWS * COLS) {
        displaySeats(seats);
        printf("Apologies. The plane is now fully-booked.\n");
    }

    printf("Here are the seats you booked:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j].occupied) {
                printf("Seat %d%c\n", seats[i][j].row, seats[i][j].column);
            }
        }
    }

    printf("Thank you for choosing Hail Airlines, %s\n", name);

    return 0;
}

