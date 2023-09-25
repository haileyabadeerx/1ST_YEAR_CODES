// Prints the contents of the 2 Dimensional array

#define ROWS 3
#define COLS 3

void printBoard(double *p) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        if (i == 0 || i == 2)
            printf("\n+-----------------------+\n");
        else
            printf("\n-------------------------\n");
        for (j = 0; j < COLS; j++) {
            printf("%s%*s%*g%*s%s", j < COLS ? "|" : "",
                *(p + i * COLS + j) < 10 ? 3 : (*(p + i * COLS + j) < 100) ? 3 : 2, "",
                *(p + i * COLS + j) < 10 ? 1 : (*(p + i * COLS + j) < 100) ? 2 : 3,
                *(p + i * COLS + j),
                *(p + i * COLS + j) < 10 ? 3 : (*(p + i * COLS + j) < 100) ? 2 : 2, "",
                j == COLS - 1 ? "|" : "");

        }
    }
    printf("\n+-----------------------+\n");
}
