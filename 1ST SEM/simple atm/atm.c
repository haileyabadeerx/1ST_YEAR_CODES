#include <stdio.h>
#include <conio.h>

int main() {
    char name[80];
    char more;
    int trnsc;
    float deposit, withdraw;
    float balance = 25000.00;
    printf("\n\t\t\t\tWelcome to Hail Bank Services.");
    printf("\nEnter your registered account name:\t");
    gets(name);
    do {
        printf("\n\nGood day, %s. Please select a transaction:", name);
        printf("\n\n\t1. Deposit \n\t2. Withdrawal \n\t3. Balance Inquiry \n\t4. Exit\n");
        scanf("\n\t%d", &trnsc);

            switch (trnsc) {
                case 1:
                    printf("\nEnter the amount you wish to deposit.\t");
                    scanf("%f", &deposit);
                    if (deposit > 0) {
                        printf("\nYou deposited Php %.2f to your account.", deposit);
                        balance = balance + deposit;
                    }
                    else
                        printf("\nYou entered an invalid input.");
                    break;
                case 2:
                    printf("\nEnter the amount you wish to withdraw.\t");
                    scanf("%f", &withdraw);
                    if (withdraw <= balance && withdraw > 0) {
                        printf("\nYou withdrew Php %.2f from your account.", withdraw);
                        balance = balance - withdraw;
                    }
                    else if (withdraw > balance && withdraw > 0)
                        printf("\nSorry, you do not have the sufficient amount. Please contact our staff for our loan accounts.");
                    else
                        printf("\nYou entered an invalid input.");
                    break;
                case 3:
                    printf("\nYour current balance is Php %.2f", balance);
                    break;
                case 4:
                    printf("\nTransaction terminated.");
                    break;
                default:
                    printf("\nYou entered an invalid input.");
                    break;
            }

            printf("\n\nDo you wish to do another transaction? Type 'Y' if yes, 'N' if no.\t");
            scanf("\n%c", &more);
        }
        while (more == 'Y' || more == 'y');
        if (more == 'N' || more == 'n')
            printf("\nThank you for using Hail Bank Services. Please get your card and wait for the receipt to print.");
        else
            printf("\nYou entered an invalid input.");
        return 0;
}
