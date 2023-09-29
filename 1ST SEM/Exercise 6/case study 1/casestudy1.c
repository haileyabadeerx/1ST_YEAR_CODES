#include <stdio.h>

int KOMPUTE(int N, int *result);

int main(int argc, const char * argv[]) {
    int N, result;
    printf("This program determines the proper divisors of an integer and\nidentifies whether its sum is DEFICIENT, PERFECT, or ABUNDANT.\n\n");

        printf("Please enter an integer: ");
        scanf("%d", &N);
    if (N <= 0)
        printf("\nINVALID! Please enter a positive integer.\n");
    else {
    printf("\nProper divisors are ");
    int sum = KOMPUTE(N, &result);
    if(result==0)
        printf("\n%d < %d is DEFICIENT\n", sum, N);
    else if(result==1)
        printf("\n%d = %d is PERFECT\n", sum, N);
    else
        printf("\n%d > %d is ABUNDANT\n", sum, N);
    }
    return 0;
}

int KOMPUTE(int N, int *result) {
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
            printf("%s%d", (i == 1) ? "" : ", ", i);
        }
    }
    printf("\nSum of proper divisors: ");
    for (int i = 1; i < N; i++) {
        if (N % i == 0)
            printf("%s%d", (i == 1) ? "" : " + ", i);
    }
        printf(" = %d", sum);

    *result = (sum < N) ? 0 : (sum == N) ? 1 : 2;
    return sum;
}
