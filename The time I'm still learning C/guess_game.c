#include <stdio.h>
#include <stdlib.h>

int main(){

    int mysteryNumber = 69;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int NoMoreGuesses = 0;

    while(guess != mysteryNumber && NoMoreGuesses == 0){
        printf("What's the mystery number? ");
        scanf("%d", &guess);
        guessCount++;

        if(guessCount < guessLimit && guess != mysteryNumber){
        printf("\nOopsie ! Wrong guess. Now try again.\n");
        }
        else if (guessCount == guessLimit){
            NoMoreGuesses = 1;
        }
    }

    if(NoMoreGuesses == 1){
        printf("\nOops! Sorry but you ran out of guesses. Better luck next time.");
    } else {
        printf("\nOh finally! You guessed it right :D");
    }

    return 0;
}
