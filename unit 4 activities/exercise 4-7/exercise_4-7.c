#include <stdio.h>

int main(int argc, const char * argv[])
{
    int num;

    printf("Please enter a non-negative integer:\t");
    scanf("%d",&num);

    if (num==0)
        printf("\nThe number 0 has no prime factors.");
    else if (num==1)
        printf("\nThe number 1 has no prime factors.");
    else if (num<0)
        printf("\nThe number you entered is a negative integer.");
    else if (num>=2){
            printf("\nPrime factors are: ");
            int i;
        for(i=2; num != 1; i++){
            while(num%i==0){
                printf(" %d ", i);
                num/=i;
            }
        }
    }
    printf("\n");
    return 0;
}

