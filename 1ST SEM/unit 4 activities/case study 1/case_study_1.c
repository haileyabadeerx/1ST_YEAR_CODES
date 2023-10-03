#include <stdio.h>

int main(int argc, const char * argv[])
{
    int num;

    printf("Please enter a positive integer:\t");
    scanf("%d",&num);

    if (num==0)
        printf("\nThe number 0 does not have a prime factorization.\n");
    else if (num==1)
        printf("\nThe number 1 does not have a prime factorization.\n");
    else if (num<0)
        printf("\nThe number you entered is a negative integer.\n");
    else if (num>=2){
            printf("\nPrime factorization: ");
        for(int i=2; num != 1; i++){
            while(num%i==0){
                printf("%d", i);
                num/=i;
                if (num!=1)
                    printf(" x ");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
