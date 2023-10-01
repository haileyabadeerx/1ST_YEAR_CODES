#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int board [3][3];

char p1 [80];

void printBoard(){
    for(int r = 0; r < 3; r++){
        printf("\n---------------------\n");
        for(int c = 0; c < 3; c++){
            printf("%s  %d  %s ", c < 3 ? "|" : "",board[r][c], c == 2 ? "|" : "");
        }
    }
    printf("\n---------------------\n");
}

void loadBoard(){

    for(int r = 0; r < 3; r++ ){
        for(int c = 0; c < 3; c++){
            board [r][c] = 0 ;
        }
    }
    printBoard();
}


int main(){
    int start, again;

    printf("\nWelcome to SUDOKU GAME");
    printf("\nStart the GAME? [1] for YES and [2] for NO");

    do{
        do{
            printf("\nResponse: ");
            scanf("%d", &start);
            if(start != 1 && start != 2)
                printf("\nINVALID INPUT");
        }while(start != 1  && start != 2);
        if (start == 2)
            goto end;

        printf("\nEnter Player's Name: ");
        scanf("%s", p1);


        loadBoard();
        printf("\n");

     }while(again == 1);


    end:
    printf("\nThank you!");
    return 0;
}
