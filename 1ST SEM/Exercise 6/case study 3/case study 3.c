#include <stdio.h>

int standard_hours(int mil_time){
    int hours;

    if(mil_time<=1259)
        hours = mil_time/100;
    else if(mil_time>=1300){
        hours = mil_time/100;
        hours-=12;
    }
    return hours;
}

int standard_mins(int mil_time){
    int mins;
    mins = mil_time%100;
    return mins;
}

int main (int argc, const char * argv[]){

    int mil_time,hours,mins;

    printf("This program converts military time to standard time.\n");
    printf("\nEnter your 24-hour time: ");
    scanf("%d", &mil_time);

    if(mil_time<0 || mil_time>2400)
       printf("\nINPUT ERROR - Invalid Time\n");
    else{
        hours = standard_hours(mil_time);
        mins = standard_mins(mil_time);

        if(mil_time>=1200 && mil_time<=2359)
            printf("\nThe standard time is %d:%02d PM\n", hours,mins);
        else if(mil_time<1200 && mil_time>=0100)
            printf("\nThe standard time is %d:%02d AM\n", hours,mins);
        else if(mil_time==2400 || mil_time<=59)
            printf("\nThe standard time is 12:%02d AM\n", mins);
    }

 return 0;
}
