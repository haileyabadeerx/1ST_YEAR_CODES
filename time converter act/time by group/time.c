#include <stdio.h>

int main(int argc, const char * argv[])
{
    int SI, Mins, Hours, SO; //SI = Seconds Input

    printf("\nHello, master! This program converts seconds to the time! :D\n\n");

    printf("Kindly enter the number of second/s: ");
    scanf("%d", &SI);

    Hours = (SI / 3600);
    Mins = (SI - (3600*Hours)) / 60;
    SO = (SI - (3600*Hours)-(Mins*60)); //SO = Seconds Output

    printf("\n\tHour/s: \t%d", Hours);
    printf("\n\tMinute/s: \t%d", Mins);
    printf("\n\tSecond/s: \t%d\n", SO);

    printf("\n\nThe second/s you input (%d seconds), makes the time: %02d:%02d:%02d!\n\n", SI, Hours, Mins, SO);

    printf("Thank you! Have a nice day! :D\n");
    return 0;
}
