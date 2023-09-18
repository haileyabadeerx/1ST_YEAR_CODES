#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b, sum,ans;

    do
    {
        printf("Input two positive integerts:\n");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("The sum is %d\n", sum);

        if(a<0||b<0){
            printf("You inputted a negative number.");
        }
        printf("Try again? if yes=1 no=0\n");
        scanf("%d",&ans);
    }while(ans==1);
/*
    int a=10;

    do
    {
        printf("%d ", a);
        a++;
    }while(a<20);

    /*
    int a=10;

    for(;a<20;a+=1)
    {
        printf("%d ", a);
        printf("%d ", a);
    }
    printf("\nThank you\n");
    /*
    char code;
    int num;

    printf("Enter integer:\n");
    scanf("%d", &num);
    printf("The number is %d\n", num);

    printf("Enter character:\n");
    scanf("\n%c", code);
    printf("The character is %c\n", code);

    // array daw scanf("%[^;]s) */

   /* int a = 10;

    while(a>20)
    {
        printf("%d ", a); //loop body
        a+=2;
    }
    printf("\nThank you\n"); */
    return 0;
}
