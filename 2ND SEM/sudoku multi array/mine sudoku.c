#include <stdio.h>

//global declaration of variables to be used
int sudoku[3][3]={{0,1,3},{2,5,0},{0,6,8}};//the array
int num1, num2, num3; //the 3 input of user
int repeated; //determines if the number is repeated
int a; //row
int b; //column
char ans;
char name[80];
int num_correct;


//printing the sudoku table
void table(){

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

//for filling out the table
int inputvalues(){

    printf("\n");
    printf("Please enter 3 numbers between 1-9 to complete the table:\n");
    printf("First number (row 1 column 1 [0][0]):\t");
    scanf("%d", &num1);

    do {
        printf("Second number (row 2 column 3 [1][2]):\t");
        scanf("%d", &num2);

            if(num2==num1)
                printf("\nSorry, the numbers you entered are not distinct.\n\n");

    } while (num2==num1);

    do {
        printf("Third number (row 3 column 1 [2][0]):\t");
        scanf("%d", &num3);

            if(num3==num1 || num3==num2)
                printf("\nSorry, the numbers you entered are not distinct.\n\n");

    } while (num1 == num3 || num2 == num3);
}

//check if the number is already in the table
int checkval(int num1, int num2, int num3) {

    repeated = 0;

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
        printf("\t\tWelcome to Sudoku Game!\n");
        printf("\t\nPlayer's name: ");
        scanf("%s", name);
        printf("\nHello %s! \nThe objective of this game is to complete \nthe table without repeating numbers.\nGoodluck :)\n", name);

        do {
            while(1){
            table();

            inputvalues();

            //checking if the numbers are in the range
            if ((num1 < 1 || num1 > 9) || (num2 < 1 || num2 > 9) || (num3 < 1 || num3 > 9)) {
                printf("\nInvalid input. Please only enter numbers between 1 and 9.\n");

              continue; // go back to start of loop if input is invalid
            }

            checkval(num1,num2,num3);

            for(a=0;a<3;a++) {
                printf("\n---------------------\n");
                    for(b = 0; b < 3; b++){
                    printf("%s  %d  %s ", b < 3 ? "|" : "",sudoku[a][b], b == 2 ? "|" : "");
                }
            }

            {
                printf("\n---------------------\n");
            }

            if (repeated == 0)             {
                printf("Good job! You have entered the correct numbers!\n");
              printf("CONGRATULATIONS, %s! You won.\n\n", name);
                num_correct++;
            } else {
                printf("Sorry, that is incorrect. \n");
                printf("You lost, %s :< Better luck next time.\n\n", name);
            }

            printf("Would you like to try again with a new table?\nIf yes, enter [Y] or [y]. If no, enter [N] or [n].\n");
            scanf("\n%c",&ans);

            if (ans == 'y' || ans == 'Y') {
                sudoku[0][0]=0; // reset the table if user wants to play again
                sudoku[1][2]=0;
                sudoku[2][0]=0;
            }
            else {
                    break;
                }
            }

        } while (ans == 'y' || ans == 'Y');

    printf("\nDo you want to exit the game?");
    printf("\nIf you want to exit game, enter any key.");
    printf("\nIf you want to play again, enter [G] or [g].\n");
    scanf("\n%c",&ans);

            if (ans == 'G' || ans == 'g') {
                sudoku[0][0]=0; // reset the table if user wants to play again
                sudoku[1][2]=0;
                sudoku[2][0]=0;
            }

    } while (ans =='G' || ans == 'g');

    printf("\nTotal wins: %d", num_correct);
    printf("\nThank you for playing!\n");
    return 0;
}
