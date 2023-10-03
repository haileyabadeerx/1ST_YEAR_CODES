#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* PRINTING HELLO WORLD */
    printf("Hello world! :D\n");
    printf("and Hello to you my love :>\n");

    /* CREATING A SHAPE */
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    /* VARIABLES */
     char characterName []= "Ivera";
     int characterAge = 19;
     printf("There's this young lady named %s.\n", characterName);
     printf("She's %d years old.\n", characterAge);

     characterAge = 19;
     printf("My age is also %d. However, she's 7 months older than me.\n", characterAge);
     printf("One thing I like about %s is that she makes me very happy.\n", characterName);

    /* DATA TYPES */
     int age = 55;
     double gwa = 96.4;
     char initial = 'C';
     char phrase []= "Ice cream";

     /* PRINTF */
     int favNum = 34;
     double favNum1 = 33.4;
     printf("My favorite %s is %d \n", "digit", favNum);
     printf("Hello \n world \n");
     printf("hi %s and %f \n","fuck", 69.1);

     /* WORKING WITH NUMBERS */
     printf("%f \n", 5.0 / 4);
     printf("%f \n", pow(3, 2));
     printf("%f \n", sqrt(50));
     printf("%f \n", ceil(19.3));
     printf("%f \n", floor(19.9));

     /* CONSTANTS */
     const int NUM = 6;
     printf("%d \n", NUM);
     /* int NUM = 5; PAG ETO NASAMA SA CODE MAG ERROR SYA*/
     printf("%d \n", NUM);
     printf("Hello bading \n");

     const char NAME []= "accla \n";
     printf("%s", NAME);
     /* char NAME []= "accling"; PAG ETO NASAMA SA CODE MAG ERROR SYA*/
     printf("%s", NAME);

     /* GETTING USER INPUT */
     /* int Love_Percent;
     printf("Enter your Love Percent: ");
     scanf("%d", &Love_Percent);
     printf("You love me %d percent \n", Love_Percent);

     double average;
     printf("What's your average? ");
     scanf("%lf", &average);
     printf("Oh wow! Your average is %f. \n", average);

     char letter;
     printf("What is your favorite letter? ");
     scanf("%c", &letter);
     printf("I see, so you like %c.", letter);

     char love[15];
     printf("Who is it that you love? ");
     scanf("%s", love);
     printf("Really? I think it's cute that you love %s.", love);

     char full_name[25];
     printf("Enter your full name: ");
     fgets(full_name, 25, stdin);
     printf("Your name is %s", full_name); */

     /* BUILDING A BASIC CALCULATOR
     int digit1;
     int digit2;
     printf("Enter first digit: ");
     scanf("%d", &digit1);
     printf("Enter second digit: ");
     scanf("%d", &digit2);

     printf("Answer: %d \n", digit1 + digit2);

     double numbr1;
     double numbr2;
     printf("Enter first number: ");
     scanf("%lf", &numbr1);
     printf("Enter second number: ");
     scanf("%lf", &numbr2);

     printf("Answer: %f", numbr1 + numbr2); */

     /* BUILDING A MAD LIBS GAME

     char color[20];
     char asul[20];
     char jowa[20];

     printf("What is the color of blood? ");
     scanf("%s", color);
     printf("Enter your favorite color: ");
     scanf("%s", asul);
     printf("Opposite of pronoun 'I': ");
     scanf("%s", jowa);

     printf("Roses are %s \n", color);
     printf("Violets are %s \n", asul);
     printf("Balik ka na bebelalabs, I really miss %s \n", jowa); */

     /* ARRAYS */

     int luckyNum[]={5,10,15,20,25,30};
        /*  index    0  1  2  3  4  5  */
     luckyNum[1]=69;
     printf("%d \n", luckyNum[1]);

     int luckyNums[20];
     luckyNums[0]=63;
     printf("%d \n", luckyNums[0]);

     /* SWITCH STATEMENTS */

    /* char grado = 'F';

    printf("What is your grade this semester? ");
    scanf("%c", &grado);

    switch(grado){
    case 'A' :
        printf("Congratulations! You did great :>");
        break;
    case 'B' :
        printf("There's always a room for improvements.");
        break;
    case 'C' :
        printf("That's fine maybe");
        break;
    case 'D' :
        printf("What the heck happened to you?");
        break;
    case 'F' :
        printf("Are you fucking kidding me?");
        break;
    case 'K':
        printf("K ka rin putangina mo!");
        break;
    default :
        printf("Invalid Grade LOL");
    } */

   /* #define number 6.09; */

    const float number = 6.09;

    char integer [] = "Hewo";

    printf("%s \n", integer);

    double __ = 2.234;
    printf("%f \n", __);

    int wanku = 3;

    printf("%f", pow(3,2));

    return 0;
}
