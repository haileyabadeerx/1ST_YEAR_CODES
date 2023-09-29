#include <stdio.h>

int sudoku[3][3]={{0,1,3},{2,5,0},{0,6,8}};
    int num1, num2, num3;
    int repeated = 0;
    int a;
    int b;
    char ans;

int table(){

    printf("\n");
            for(a=0;a<3;a++) {
                printf("\n---------------------\n");
                for(b = 0; b < 3; b++){
                printf("%s  %d  %s ", b < 3 ? "|" : "",sudoku[a][b], b == 2 ? "|" : "");
                }
            }
            {
                printf("\n---------------------\n");
            }

}

int inputvalues(){

    printf("\n");
            printf("Please enter 3 numbers between 1-9 to complete the table:\n");
            printf("First number:\t");
            scanf("%d", &num1);

           do{
            printf("Second number:\t");
            scanf("%d", &num2);
            if(num2==num1)
                printf("Invalid input. Numbers cannot be repeated.\n");
            } while (num2==num1);

           do {
            printf("Third number:\t");
            scanf("%d", &num3);
           if(num3==num1 || num3==num2)
            printf("Invalid input. Numbers cannot be repeated.\n");

           } while (num1 == num3 || num2 == num3);
}

int checkval(int num1, int num2, int num3) {
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            if (sudoku[a][b] == num1 || sudoku[a][b] == num2 || sudoku[a][b] == num3) {
                printf("\n%d is repeated.\n", sudoku[a][b]);
                repeated = 1;
            }
        }
    }
    sudoku[0][0] = num1;
    sudoku[1][2] = num2;
    sudoku[2][0] = num3;
    return (repeated);
}

int main(){

    do {
        printf("\tWelcome to Sudoku Game!");
        printf("\t\nEnter 3 numbers between 1-9 to fill out the Sudoku table: ");

        do {

            table();

            inputvalues();

            if (num1 < 1 || num1 > 9 || num2 < 1 || num2 > 9 || num3 < 1 || num3 > 9) {
                printf("Invalid input. Please enter 3 numbers between 1 and 9.\n");
           // if (num1)
                continue; // go back to start of loop if input is invalid
            }

            checkval(num1,num2,num3);

          //  printf("\n");
            for(a=0;a<3;a++) {
                printf("\n---------------------\n");
                for(int b = 0; b < 3; b++){
                printf("%s  %d  %s ", b < 3 ? "|" : "",sudoku[a][b], b == 2 ? "|" : "");
                }
            }
            {
                printf("\n---------------------\n");
            }

            if(repeated == 0)
                printf("CONGRATULATIONS! You won.\n\n");
            else
            printf("You lost :< Better luck next time.\n\n");

            printf("Would you like to try again with a new table?\nIf yes, enter 'y'. If no, enter any other key.\n");
            scanf("\n%c",&ans);
            if (ans=='y' || ans=='Y') {
                sudoku[0][0]=0; // reset the table if user wants to play again
                sudoku[1][2]=0;
                sudoku[2][0]=0;
            }

        } while (ans=='y' || ans=='Y');

        printf("Would you like to play again from the start? If yes, enter 'y'. If no, enter any other key.\n");
        scanf("\n%c",&ans);

    } while (ans=='y' || ans=='Y');

    printf("\nThank you!\n");
    return 0;
}
