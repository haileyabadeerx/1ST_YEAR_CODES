#include <stdio.h>

int main(int argc, const char * argv[])
{
    int Hours,Minutes;

    printf("Please enter the hour/s:\t");
    scanf("%d",&Hours);

    Minutes = Hours * 60;

    printf("\n%d hours is equal to %d minutes.\n", Hours, Minutes);

    return 0;
}
