#include <stdio.h>

int main(int argc, const char*argv[])
{
    char name[80];
    int seconds, hours, mins, secs;

    printf("Enter your name please: \t");
    scanf("%s", name);

    printf("\nEnter number of second/s:\t");
    scanf("%d", &seconds);
    hours = (seconds/3600);
    mins = (seconds - (hours*3600))/60;
    secs = (seconds - (hours*3600)-(mins*60));

    printf("\n\tHour/s: \t%d\n", hours);
    printf("\tMinute/s: \t%d\n", mins);
    printf("\tSecond/s: \t%d\n\n", secs);

    printf("%s, the time is \t%02d:%02d:%02d\n", name, hours, mins, secs);

    return 0;
}


 /*
    char name[80];
    int seconds, hours, mins, secs;

    printf("Type your name please:\t");
    scanf("%s", name);

    printf("Enter number of second/s:\t");
    scanf("%d", &seconds);
    hours = seconds/3600;
    mins = seconds/60;
    secs = seconds%60;

    printf("Hour/s: %d\t\n", hours);
    printf("Minute/s: %d\t\n", mins);
    printf("Second/s: %d\t\n\n", secs);

    printf("The time is %02d:%02d:%02d \n", hours, mins, secs);

/*
    --------------------------

    int hours, mins, secs;
    printf("Enter number of second/s:\t");
    scanf("%d", &secs);
    hours = secs/3600;
    mins = secs/60;
    secs = secs%60;

    printf("The time is %d:%d:%d \n", hours, mins, secs); */
