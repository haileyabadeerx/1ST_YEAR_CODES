#include <stdio.h>

int main(int argc, const char * argv[])
{
    int M;
    int N1;
    int N2;
    int count = 0;

    printf("Please input the starting number:\t");
    scanf("%d", &N1);

    printf("Please input the ending number:\t\t");
    scanf("%d", &N2);

    printf("These numbers will be divisible by:\t");
    scanf("%d", &M);

    printf("\nThe numbers in the range of (%d, %d), which are divisible by %d, are:\n", N1, N2, M);
    for (int i = N1; i <= N2; i++) {
          if (i % M == 0) {
            count++;
            printf("%d\t", i);
        }
    }
        printf("\n\nThere are %d numbers that are divisible by %d.\n", count,M);

    return 0;
}
