#include <stdio.h>

int main()
{
    int x;
    for(x=1;x<=3;x++)
       printf("%d\n",x);
    printf("%d\n",x);

    /*
    ONE WAY - If statement

    int N;

    printf("Please enter your number: ");
    scanf("%d", &N);
    if(N%2 == 1)
            printf("Your number %d is odd\n", N);
// this can be included sa if statement pag may curly brackets
//          printf("Hampi New Year\n");
    printf("Thank you for using my program.\n");
---------------------------------------------------------

    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age>21)
            printf("Your age %d is older than 21\n", age);
    printf("You are %d years old\n", age);
    printf("Thank you for using my program\n");
*/
//  TWO WAY - If-else statement

/*    int N;

    printf("Please enter your number:\n");
    scanf("%d", &N);
    if(N%2 == 1) {
         printf("Your number %d is odd\n", N);
         printf("Happy New Year\n");
    }
    else {
            printf("Your number %d is even\n", N);
            printf("Merry Christmas\n");
    }
    printf("Thank you for using my program");

    int age, IPA;
    char gen;

    printf("Enter your gender:\n");
    scanf("%c", &gen);
    printf("Please enter your age:\n");
    scanf("%d", &age);

    if(gen=='m' || gen=='M'){
        IPA = age/2+7;
    }
    else
        IPA = (age - 7)*2;
    printf("Your ideal partner's age is %d\n", IPA);

    */
//  MULTI-WAY
   /* char color;
    printf("Input traffic color:\n");
    scanf("%c",&color);
    if(color=='r'||color=='R')
        printf("STOP\n");
    else if(color=='y'||color=='Y')
        printf("GO\n");
    printf("Careful in driving\n");
    printf("Thank you for using my program\n");*/
    return 0;
}
