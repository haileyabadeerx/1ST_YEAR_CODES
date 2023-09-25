#include <stdio.h>

int main(int argc, const char * argv[])
{
    int days,rent;

    printf("How many days are you late from the expected due date?\n");
    printf("[1] 1-2 days\n[2] 3-4 days\n[3] 5-6 days\n[4] More than 7 days\nEnter here:\t");
    scanf("%d",&days);

    switch (days){
        case 1: printf("\nYour fine is 10.00\n");
            break;
        case 2: printf("\nYour fine is 15.00\n");
            break;
        case 3: printf("\nYour fine is 20.00\n");
            break;
        case 4:
            {
              printf("\nWhat did you rent? CD=1 VHS=2\n");
              scanf("%d",&rent);
                if(rent==1)
                    printf("\nYour fine is 50.00\n");
                else if (rent==2)
                    printf("\nYour fine is 35.00\n");
                else
                    printf("\nINVALID INPUT\n");
            }
            break;
        default: printf("\nINVALID ENTRY!\n");
    }
    return 0;
}
