#include <stdio.h>

int prime(int num);

int main(int argc, const char * argv[])
{
    int num;
    printf("This program will determine whether an integer is prime or not.");
    printf("\n\nEnter a number: ");
    scanf("%d", &num);

    if(num<0){
        printf("\nThe number you entered is a negative number.\n");
       return 1;
    }

    if(prime(num)==0)
        printf("\n%d is a prime number.\n", num);
    else
        printf("\n%d is not a prime number.\n", num);

    return 0;
}

int prime(int num){

    if(num<2){
        return 1; //0 and 1 are special nums that can't be prime
    }
    for(int i = 2; i<=num/i ; i++){
        if(num % i == 0)
            return 1; //not prime (false)
        }
            return 0; //num is prime (true)
    }
