/* I created this program to impress someone I like before XD*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     char color[20];
     char asul[20];
     char pronoun[20];

     printf("What is the color of blood? ");
     scanf("%s", color);
     printf("Enter your favorite color: ");
     scanf("%s", asul);
     printf("Opposite of pronoun 'I': ");
     scanf("%s", pronoun);

     printf("Roses are %s \n", color);
     printf("Violets are %s \n", asul);
     printf("Balik ka na bebelalabs, I really miss %s \n", pronoun);
    return 0;
}
