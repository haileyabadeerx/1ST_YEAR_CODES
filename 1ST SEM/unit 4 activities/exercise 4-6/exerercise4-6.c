#include <stdio.h>

int main(int argc, const char * argv[])
{
    int days,rent;

    printf("How many days are you late from the expected due date?\n");
    scanf("%d",&days);

    if(days==0)
        printf("\nYou are not late.\n");
    else if(days>0&&days<=2)
        printf("\nYour fine is 10.00\n");
    else if(days<=4&&days>2)
        printf("\nYour fine is 15.00\n");
    else if(days<=5&&days>4)
        printf("\nYour fine is 20.00\n");
    else if(days>=7)
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
    else
        printf("\nINVALID INPUT. PLEASE PUT A VALID NUMBER OF DAY/S.\n");

    return 0;
}
