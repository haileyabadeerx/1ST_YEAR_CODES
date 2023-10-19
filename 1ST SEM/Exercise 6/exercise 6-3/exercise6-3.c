#include <stdio.h>

int is_prime(int n);

int main(int argc, const char * argv[])
{
    int n;
    printf("Prime or Not? Let's find out.");
    printf("\n\nEnter a number: ");
    scanf("%d", &n);

    if(n<0){
        printf("\nINVALID INPUT! Please enter a positive integer.\n");
       return 0;
    }

    if(is_prime(n)==1)
        printf("\n%d is a prime number.\n", n);
    else
        printf("\n%d is not a prime number.\n", n);

    return 0;
}

int is_prime(int n){

    if(n<2){
        return 0; //0 and 1 are special nums that can't be prime
    }
    for(int k = 2; k<=n/k ; k++){
        if(n % k == 0)
            return 0; //not prime
        }
            return 1; //n is prime
    }
