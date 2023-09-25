#include <stdio.h>

int main(int argc, const char * argv[])
{
    float HrRendered, sReg, sOT;
    char eName[80];
    //HrRendered is hours of work that have been rendered for the week
    //sReg is the salary if there are no overtime hours
    //sOT is the salary if there are overtime hours
    //eName is the employee's name

    printf("Good day, dear employee! What is your name?\n");
    scanf("%s", eName);

    printf("\nHow many hour/s of work have you rendered for this week?\n");
    scanf("%f", &HrRendered);

    if (HrRendered>=0 && HrRendered<=40)
        {sReg = HrRendered * 10; //10 is the hourly rate
        printf("\n%s, your wage for this week is $%.2f\n", eName, sReg);}
    else //HrRendered > 40
        {sOT = (40 * 10) + (HrRendered - 40) * 10 * 1.5; //Overtime hours are paid at 150% of the hourly rate
        printf("\n%s, your wage for this week is $%.2f\n", eName, sOT);}

    printf("\nHave a nice day and continue working hard!\n");
    return 0;
}
