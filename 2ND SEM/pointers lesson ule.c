#include <stdio.h>

int main ()
{
    int x = 4;
    int *p = &x;
    int **pp;

    pp = &p;

    printf("values:\n");
    printf("%d\n", x);
    printf("%d\n", *p);

    printf("\naddresses:\n");
    printf("%x\n", &x);
    printf("%x\n", p);

    printf("%x\n", &p);
    printf("%d\n", **pp);

    return 0;
}
