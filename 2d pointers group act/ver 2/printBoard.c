// Prints the contents of the 2 Dimensional array

#define ROWS 3
#define COLS 3

void printBoard(double **numbers){
    for(int i = 0; i <  ROWS; i++){
        if(i == 0 || i == 2)
            printf("\n+-----------------------+\n");
        else
            printf("\n-------------------------\n");
        for (int j = 0; j < COLS; j++){
            // printf("%s  %3g  %s", j < COLS ? "|" : "", *(*(numbers + i) + j), j == COLS - 1 ? "|" : "");
            printf("%s%*s%*g%*s%s", j < COLS ? "|" : "",
                                (*(*(numbers + i) + j)) < 10 ? 3 : ((*(*(numbers + i) + j)) < 100) ? 3 : 2, "",
                                (*(*(numbers + i) + j)) < 10 ? 1 : ((*(*(numbers + i) + j)) < 100) ? 2 : 3,
                                *(*(numbers + i) + j),
                                (*(*(numbers + i) + j)) < 10 ? 3 : ((*(*(numbers + i) + j)) < 100) ? 2 : 2, "",
                                j == COLS - 1 ? "|" : "");

        }
    }
    printf("\n+-----------------------+\n");
}
