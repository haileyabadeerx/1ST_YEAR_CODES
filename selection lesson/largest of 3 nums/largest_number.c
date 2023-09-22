#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a,b,c;

    printf("Input three different integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
        printf("\n%d is the largest number\n", a);
    else if (b>c)
        printf("\n%d is the largest number\n", b);
    else
        printf("\n%d is the largest number\n", c);

    printf("\nThank you\n");

    return 0;
}
