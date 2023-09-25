#include <stdio.h>

int main(int argc, const char * argv[])
{
    int X[10]={3,12,7,2,6,9,4,8,5,10};

    //printf("%d",X[5]);
    printf("value of X[9] before is %d\n",X[9]);
    scanf("%d",&X[9]);
    printf("value of X[9] after is %d\n",X[9]);

    if (X[0] > X[3])
        printf("True\n");
    else printf("False\n");

    printf("value of X[2+4] before is %d\n", X[2+4]);
        X[2+4] = X[8]*5;
    printf("value of X[2+4] after is %d\n", X[2+4]);


    return 0;
}
