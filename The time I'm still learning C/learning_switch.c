/* I am experimenting this time if I can use strings on switch statements but I cannot*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char words[50];

    printf("Enter your answer: ");
    scanf("%s", &words);

    switch (words){

    case 1:{
    if(words == passed)
    printf("Congratulations! You passed :D");
    }
    break;
    case 2:{
    if(words == failed)
    printf("Sorry, you failed. D:");
    }
    break;
    default:
        printf("Enter something valid please.");



    return 0;
}
