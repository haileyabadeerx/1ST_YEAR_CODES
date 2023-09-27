#include <stdio.h>

#define SIZE 3

//FUNCTION TO PRINT THE SUDOKU BOARD
void printSudoku(int sudokuBoard[SIZE][SIZE])
{
    printf("\n-------------------------\n");
    //NESTED FOR LOOP IN ORDER TO PRINT THE ELEMENTS OF THE 2D ARRAY
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %d\t", sudokuBoard[i][j]);
        }
        printf("|\n-------------------------\n");
    }
}

//FUNCTION TO RESER THE SUDOKU BOARD
void resetSudoku(int sudokuBoard[SIZE][SIZE])
{
    //ZERO REPLACED THE VALUES IN ORDER TO RESET IT
    sudokuBoard[0][0]=0;
    sudokuBoard[1][0]=0;
    sudokuBoard[1][1]=0;
}

//CHECKS IF THE INPUTTED NUMBER/ VALUE IS VALID OR NOT
//NUMBER IS ONLY VALID IF IT IS GREATER OR EQUAL THAN 1 AND LESS THAN OR EQUAL 9
int isValid(int num)
{
    if (num < 1 || num > 9) {
        return 0; //RETURNS 0 IF NUMBER IS INVALID
    }
    return 1; //RETURNS 1 IF NUMBER IS VALID
}

//CHECKS IF THE INPUTTED NUMBER/ VALUE IS UNIQUE OR NOT
//NUMBER IS UNIQUE IF IT THERE IS NO OTHER ELEMENT THAT SHARES THE SAME VALUE
int isUnique(int sudokuBoard[SIZE][SIZE], int num)
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (sudokuBoard[i][j] == num) {
            return 1; //RETURNS 1 IF A NUMBER IS NOT UNIQUE
            }
        }
    }
    return 0; //RETURNS 0 IF A NUMBER IS UNIQUE
}

//FUNCTION TO CHECK IF THE SUDOKUBOARD IS ALREADY COMPLETED OR NOT
//WE CAN SAY THAT THE BOARD IS COMPLETE IF ALL NUMBERS FROM 1-9 ARE IN THE ARRAY
int checkBoard(int sudokuBoard[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (sudokuBoard[i][j] == 0) {
            return 1;
            }
        }
    }
    return 0;
}

//MAIN FUNCTION
int main()
{
    //INITIALIZING THE VARIABLES
    int sudokuBoard[SIZE][SIZE] = {{0, 4, 7}, {0, 0, 6}, {5, 8, 9}};
    int choice, repeat;
    int input1, input2, input3;
    char playerName[80];

    //INTRODUCTION TO THE PROGRAM
    printf("\n=============================================");
    printf("\n\tWELCOME TO DAILY SUDOKU!\n");
    printf("\nPlease tell us your name: ");
    scanf("%s", playerName);
    printf("=============================================");

    printf("\n\n%s, here is today's Sudoku problem.\n", playerName);
    printSudoku(sudokuBoard); //CALLS THE PRINTSUDOKU FUNCTION

    //DO-WHILE LOOP TO EXECUTE THE PROCESS MULTIPLE TIMES
    do{
        //IF STATEMENT TO CHECK IF THE SUDOKU BOARD IS COMPLETE
        if(checkBoard(sudokuBoard)==0)
            printf("\nYOU HAVE COMPLETED TODAY'S SUDOKU PROBLEM!\n");

        //PROVIDES OPTIONS FOR USER'S ACTIONS IN THE PROGRAM
        printf("\n==============================================");
        printf("\nWhich action would you like to take?");
        printf("\n\tPress '1' to insert value on [1][1] \n\tPress '2' to insert value on [2][1] \n\tPress '3' to insert value on [2][2] \n\tPress '4' to try again \n\tPress '5' to exit\n");
        printf("Response: ");
        scanf("%d", &choice);

    //SWITCH-CASE
    switch(choice)
    {
        //IF CASE 1 IS PICKED, THE USER NEEDS TO INSERT UNIQUE VALUE FOR [1][1] OR 1ST ELEMENT
        case 1: printf("\nPlease enter a unique value between 1 to 9 for [1][1].");
                printf("\nYour input: ");
                scanf("%d", &input1);

                //CALLS A FUNCTION TO CHECK THE VALIDITY OF THE INPUTTED NUMBER
                if(isValid(input1)==1)
                {
                    //CALLS A FUNCTION TO CHECK THE UNIQUENESS OF THE INPUTTED NUMBER
                    if(isUnique(sudokuBoard, input1)==0)
                    {
                        //PROCESSES WILL ONLY TAKE PLACE IF THE INPUTTED NUMBER IS VALID AND UNIQUE
                        printf("\n%d is a UNIQUE number!\n", input1);
                        sudokuBoard[0][0]=input1; //CHANGES THE VALUE OF [1][1] OR 1ST ELEMENT
                        printSudoku(sudokuBoard); //PRINTS THE UPDATED SUDOKU BOARD
                    }
                    else //EXECUTES IF THE INPUTTED NUMBER IS VALID BUT NOT UNIQUE
                    {
                        printf("\n%d is NOT a UNIQUE number!\n", input1);
                        break;
                    }
                }
                else //EXECUTES IF THE INPUTTED NUMBER IS NOT VALID
                {
                    printf("\n\nPlease only enter numbers from 1 to 9!\n", input1);
                    break;
                }
                break;

        //IF CASE 2 IS PICKED, THE USER NEEDS TO INSERT UNIQUE VALUE FOR [2][1] OR 4TH ELEMENT
        case 2: printf("\nPlease enter a unique value between 1 to 9 for [2][1].");
                printf("\nYour input: ");
                scanf("%d", &input2);

                //CALLS A FUNCTION TO CHECK THE VALIDITY OF THE INPUTTED NUMBER
                if(isValid(input2)==1)
                {
                    //CALLS A FUNCTION TO CHECK THE UNIQUENESS OF THE INPUTTED NUMBER
                    if(isUnique(sudokuBoard, input2)==0)
                    {
                        //PROCESSES WILL ONLY TAKE PLACE IF THE INPUTTED NUMBER IS VALID AND UNIQUE
                        printf("\n%d is a UNIQUE number!\n", input2);
                        sudokuBoard[1][0]=input2; //CHANGES THE VALUE OF [2][1] OR 4TH ELEMENT
                        printSudoku(sudokuBoard); //PRINTS THE UPDATED SUDOKU BOARD
                    }
                    else //EXECUTES IF THE INPUTTED NUMBER IS VALID BUT NOT UNIQUE
                    {
                        printf("\n%d is NOT a UNIQUE number!\n", input2);
                        break;
                    }
                }
                else //EXECUTES IF THE INPUTTED NUMBER IS NOT VALID
                {
                    printf("\n\nPlease only enter numbers from 1 to 9!\n", input2);
                    break;
                }
                break;

        //IF CASE 3 IS PICKED, THE USER NEEDS TO INSERT UNIQUE VALUE FOR [2][2] OR 5TH ELEMENT
        case 3: printf("\nPlease enter a unique value between 1 to 9 for [2][2].");
                printf("\nYour input: ");
                scanf("%d", &input3);

                //CALLS A FUNCTION TO CHECK THE VALIDITY OF THE INPUTTED NUMBER
                if(isValid(input3)==1)
                {
                    //CALLS A FUNCTION TO CHECK THE UNIQUENESS OF THE INPUTTED NUMBER
                    if(isUnique(sudokuBoard, input3)==0)
                    {
                        //PROCESSES WILL ONLY TAKE PLACE IF THE INPUTTED NUMBER IS VALID AND UNIQUE
                        printf("\n%d is a UNIQUE number!\n", input3);
                        sudokuBoard[1][1]=input3;//CHANGES THE VALUE OF [2][2] OR 5TH ELEMENT
                        printSudoku(sudokuBoard);//PRINTS THE UPDATED SUDOKU BOARD
                    }
                    else //EXECUTES IF THE INPUTTED NUMBER IS VALID BUT NOT UNIQUE
                    {
                        printf("\n%d is NOT a UNIQUE number!\n", input3);
                        break;
                    }
                }
                else //EXECUTES IF THE INPUTTED NUMBER IS NOT VALID
                {
                    printf("\n\nPlease only enter numbers from 1 to 9!\n", input3);
                    break;
                }
                break;

        //IF CASE 4 IS PICKED, THE SUDOKU BOARD WILL RESET AND EVERY CHANGES MADE WILL GO BACK TO ITS DEFAULT FORM
        case 4: resetSudoku(sudokuBoard); //CALLS A FUNCTION THAT WILL RESET THE SUDOKU BOARD
                printSudoku(sudokuBoard); //PRINTS THE DEFAULT SUDOKU BOARD
                break;

        //CASE 5 WILL PROVIDE THE USER AN OPTION TO EXIT OR CONTINUE THE PROGRAM
        case 5: if(checkBoard(sudokuBoard)==1) //CHECKS IF THE SUDOKU BOARD IS NOT YET COMPLETE
                {
                    //EXECUTES IF THE SUDOKU BOARD IS NOT YET COMPLETE
                    printf("\n==============================================");
                    printf("\nYou haven't completed the Sudoku problem...\n"); //REMINDS THE USER THAT THE PROBLEM ISN'T YET SOLVED
                    printf("\nAre you sure you want to exit?"); //ASKS THE USER IF HE WANTS TO CONTINUE OR NOT
                    printf("\nPress '1' if YES or '2' if NO\nResponse:");
                    scanf("\n%d", &repeat);

                    //CHECKS IF THE INPUTTED RESPONSE IF VALID
                    if(repeat<0 || repeat>2)
                    {
                        //EXECUTES WHEN THE INPUTTED RESPONSE IS NOT VALID
                        printf("\nPlease only enter 1 or 2.");
                        choice=0;
                    }
                    //2 IS VALID
                    else if(repeat==2)
                    {
                        //EXECUTES ONLY WHEN THE USER INPUTTED 2
                        printSudoku(sudokuBoard); //CALLS A FUNCTION TO PRINT THE SUDOKU BOARD
                        choice=0;
                    }
                    //1 IS VALID
                    else
                    {
                        //EXECUTES ONLY WHEN THE USER INPUTTED 1
                        //THANKS THE USER FOR USING THE PROGRAM
                        printf("\nTHANK YOU FOR PLAYING DAILY SUDOKU!\n");
                        printf("COME BACK TOMORROW FOR A NEW ONE!\n");
                        printf("==============================================\n");
                        return 0;
                    }
                break;
                }
                //IF THE SUDOKU BOARD IS ALREADY COMPLETE
                else
                {
                    //ASKS THE USER IF HE WANTS TO PLAY AGAIN OR NOT
                    printf("\nAre you sure you want to exit?");
                    printf("\nPress '1' if YES or '2' if NO\nResponse:");
                    scanf("\n%d", &repeat);

                    //CHECKS IF THE INPUTTED RESPONSE IS VALID OR NOT
                    if(repeat<0 || repeat>2)
                    {
                        //EXECUTES ONLY WHEN INPUTTED RESPONSE IS NOT VALID
                        printf("\nPlease only enter 1 or 2.");
                        choice=0;
                    }
                    //2 IS VALID
                    else if(repeat==2)
                    {
                        //RESETS THE SUDOKU BOARD SINCE THIS JUST MEANS THAT THE USER WANTS TO SOLVE IT AGAIN EVEN IF HE COMPLETED IT ALREADY BEFORE
                        resetSudoku(sudokuBoard);
                        printSudoku(sudokuBoard); //PRINTS THE DEFAULT SUDOKU BOARD
                        choice=0;
                    }
                    //1 IS VALID
                    else
                    {
                        //EXECUTES WHEN THE USER NO LONGER WANTS TO TRY THE PROGRAM AGAIN
                        printf("\nTHANK YOU FOR PLAYING DAILY SUDOKU!\n");
                        printf("COME BACK TOMORROW FOR A NEW ONE!\n");
                        printf("==============================================\n");
                        return 0;
                    }
                break;
                }

        //EXECUTES WHEN THE USER INPUTTED AN INVALID RESPONSE IN THE MENU
        default:printf("\nERROR! Invalid Input.");
                printf("\nPlease try again.\n");
                break;
    }
    }while(choice!=5);
}
