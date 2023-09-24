#include <stdio.h>
#define FEETMI 5280 //one mile
#define FEETKM 3282 //one km

void instructions(){
    printf("\n\nInstructions: Enter the race time of each runner separated by a space.\n\t\tPut a period for seconds with decimals.\n");
    printf("\nExample: 4 20.34");
    printf("\nThis indicates that the runner has 4 mins and 20.34 secs time.\n");
}

int main (int argc, const char * argv[])
{
    int runner = 1;
    float fps, mps;

    printf("Welcome to Penn Relays' Mile Race !");
    instructions();

    do{
        int mins;
        float secs, time;
        printf("\nEnter Runner #%d's time: ", runner);
        scanf("%d %f", &mins, &secs);

        time = secs + (60 * mins); //converting time to seconds
        fps = FEETMI / time; //feet per seconds
        mps = 1000 * (fps / FEETKM); //meters per seconds

        printf("Speed of Runner #%d's in feet per seconds is %.2f\n", runner, fps);
        printf("Speed of Runner #%d's in meters per seconds is %.2f\n", runner, mps);

        runner++; //counter for the 4 runners
    } while(runner<=4);

    return 0;
}
