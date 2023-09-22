#include <stdio.h>

void Factorial(int num){
    int count;
    long long int factor = 1;
    if(num==0)
        printf("\nThe factorial of 0! is 1.\n");
    else if(num<0)
        printf("\nThe number you entered is a negative integer.\n");
    else if(num>0){
        printf("\nThe factorial of %d is", num);
        for(count = 1; count <=num; count++){
            printf(" %d ", count);
            factor = factor * count;//for the factorial
            if(count != num)
                printf("*");
        }
        printf("\n= %llu\n", factor);
    }
}

int main(int argc, const char * argv[])
{
    int num;//for the number inputted by the user
    int N;
    printf("This program calculates the factorial of a positive integer.\n");
    printf("\nEnter a number: ");
    scanf("%d", &num);
    Factorial(num);
    return 0;
}



