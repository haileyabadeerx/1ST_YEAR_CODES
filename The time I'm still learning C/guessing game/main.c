#include <stdio.h>
#include <stdlib.h>

int main(){

    int mysteryNumber = 69;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int NoMoreGuesses = 0;

    while(guess != mysteryNumber && NoMoreGuesses == 0){
        if(guessCount < guessLimit){
        do {
        printf("What's the mystery number? ");
        scanf("%d", &guess);
        guessCount++;
        printf("\nOopsie! That's wrong.\n");
        } while ( guess != mysteryNumber && NoMoreGuesses == 0 );
        }
        else {
            NoMoreGuesses = 1;
        }
    }

    if(NoMoreGuesses == 1){
        printf("Oops! Sorry but you ran out of guesses. Better luck next time.");
    } else {
        printf("Oh finally! You guessed it right :D");
    }

    return 0;
}
