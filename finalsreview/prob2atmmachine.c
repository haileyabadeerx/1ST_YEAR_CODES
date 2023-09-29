#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//---the structure to hold the values that will be coming from the file
struct BankAccount { 
    char account_number[6];
    char pin[5];
    float balance;
};


//---function prototype of the account finder function
struct BankAccount* find_account(char account_number[], char pin[]);

void save_accounts_to_file(struct BankAccount accounts[]);

void To_Acc_Dat(int operation, const char* accNum, const char* pin, float newBalance, float balance);

int hasAccountNumber(char *line, const char *accountNumber);

void press_any_key();


int main() {
    /* time.h ---- for using time ---- */
    // time_t now = time(NULL);

    // char *string_now = ctime(&now);
    // printf("%s\n", string_now);

    // struct tm *gm_time = gmtime(&now);
    /* time.h ---- */

    int choice = 0;

    do {

    

    if (choice == 0) {
    
    system("cls");
    printf("\nWelcome to PUP Online Banking Systems Main Menu\n");
    printf("\n[1] Create Bank Account\n");
    printf("[2] ATM Login\n");
    printf("==Admin Commands==\n");
    printf("[3] View all Balances (Admin Only)\n");
    printf("[4] View all Account Numbers Registered (Admin Only)\n");
    printf("[5] View all Account Pins Registered (Admin Only)\n");
    printf("[6] View all Transactions (Admin Only)\n");
    printf("[7] Delete an Account (Admin Only)\n");
    printf("== EXIT ==\n");
    printf("[8] Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    }

    else if (choice == 1) {
        //create account
        struct BankAccount accounts[0];

            system("cls");
            printf("\nMode: Create Account --");
            printf("\nEnter account number (5 digits) for new account: ");
            scanf("%5s", accounts[0].account_number);
            fflush(stdin);
            printf("Enter PIN (4 digits) for new account: ");
            scanf("%4s", accounts[0].pin);

            accounts[0].balance = 25000.00; // Initialize balance to 0.0
        

        save_accounts_to_file(accounts);

        printf("Account is registered. \ninformation saved to accounts.dat\n");

        To_Acc_Dat(1, accounts[0].account_number, accounts[0].pin, accounts[0].balance, accounts[0].balance);

            choice = 0;

    //atm activates
    } else if (choice == 2) {


    /* variables to hold the values inputted by the user */
    char account_number[6];
    char pin[5];
    struct BankAccount* account;
    int choice2;
        //For viewing single transactions
        char accountNumber[20];
    /* ---- */
    system("cls");
    printf("Enter account number (5 digits): ");
    scanf("%5s", account_number); //asking of acc number

    printf("Enter PIN (4 digits): ");
    scanf("%4s", pin); //asking of acc pin

    account = find_account(account_number, pin); //calling of the function account finder

    if (account == NULL) { 
        printf("Account not found or invalid PIN.\n");
        return 1; //This is if the account finder function cannot find anything that it will return NULL
    }

    /* ---- USER UI ---- */
     do{

    system("cls");
    printf("\n\nWelcome to PUP-On-Line Banking Systems\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. View Account Number\n");
    printf("5. View Account Pin\n");
    printf("6. View Transactions of this Account\n");
    printf("7. Logout to Main Menu\n");
    printf("Press the number of your choice: ");

    // User response for the UI
    
    scanf("%d", &choice2);

    //Declaration of dep and withdraw for the banking mechanics to be used in the switch case
    float deposit_amount, withdraw_amount;
    char select;

    switch (choice2) {
        case 1:
            system("cls");
            printf("\nYour current balance: %.2f\n", account->balance);
            press_any_key();
            break; //case 1 displays account balance

        case 2:
            system("cls");
            deposit_amount;
            printf("Enter the deposit amount: ");
            scanf("%f", &deposit_amount); //ask the amount

            if (deposit_amount > 0) { //checker if the amount is valid
                account->balance += deposit_amount; 
                //the result will be added on the account structures which is manipulated at the function through a pointer
                printf("Deposit successful. Your new balance: %.2f\n", account->balance);
                // Update the account information in the file.
                FILE* file = fopen("data.dat", "r+"); //opens the file with "r+" mode
                if (file != NULL) { //checks if the file is valid
                    fseek(file, -sizeof(struct BankAccount), SEEK_CUR); 
                    fprintf(file, "%s %s %.2f\n", account->account_number, account->pin, account->balance);
                    fclose(file);
                }
            } else {
                printf("Invalid amount. Please enter a positive value.\n");
            }
            To_Acc_Dat(4, account->account_number, account->pin, deposit_amount, account->balance);
            break;

        case 3:
            
            withdraw_amount;
            system("cls");
            printf("Enter the withdrawal amount: ");
            scanf("%f", &withdraw_amount);

            if (withdraw_amount > 0) {
                if (withdraw_amount <= account->balance) {
                    account->balance -= withdraw_amount;
                    printf("Withdrawal successful. Your new balance: %.2f\n", account->balance);
                    // Update the account information in the file.
                    FILE* file = fopen("data.dat", "r+");
                    if (file != NULL) {
                        fseek(file, -sizeof(struct BankAccount), SEEK_CUR);
                        fprintf(file, "%s %s %.2f\n", account->account_number, account->pin, account->balance);
                        fclose(file);
                    }
                } else {
                    printf("Insufficient balance.\n");
                }
            } else {
                printf("Invalid amount. Please enter a positive value.\n");
            }
            To_Acc_Dat(3, account->account_number, account->pin, deposit_amount, account->balance);
            break;

        case 4: 

        system("cls");
        printf("\nHere's your account Number: ");
        printf("%s", account->account_number);
        press_any_key();
        break;

        case 5: 

        system("cls");
        printf("\nHere's your account PIN: ");
        printf("%s", account->pin);
        press_any_key();
        break;

        case 6: 

        system("cls");
        strcpy(accountNumber, account->account_number);

            FILE *file = fopen("accounts.dat", "r"); // Replace "accounts.dat" with the name of your log file

            if (file == NULL) {
                printf("Error opening file.\n");
                return 1;
            }

            char line[300];
            while (fgets(line, sizeof(line), file)) {
                if (hasAccountNumber(line, accountNumber)) {
                    // If the line contains the account number we are looking for, print the transaction
                    printf("%s\n", line);
                }
            }

            fclose(file);

        press_any_key();


            break;


        case 7:

   		do {
            system("cls");
        printf("\nWould you like to go to Main Menu?");
        printf("\n[Y] if Yes");
        printf("\n[N] if No");
        printf("\nYour response: ");
        scanf(" %c", &select);

        if(select == 'Y' || select == 'y') {
        printf("Thankyou for using our ATM\n");
            choice = 0;

        } else if(select == 'N' || select == 'n') {

        choice2 = 0;

        } else {
        printf("Invalid choice. Please Enter Only [N/n] or [Y/y]\n");

        }

    } while (select != 'Y' && select != 'y' && select != 'N' && select != 'n');
        break;

            default: 
            printf("Invalid choice. Please select a valid option.\n");
            break;
        }
        }while(choice2!=7);
   
        free(account);

    
    //View all transactions
    } else if(choice == 3) {

        int accountNumber, pin;
        float balance;
            system("cls");
            FILE* file = fopen("data.dat", "r");
            if (file == NULL) {
            printf("Failed to open the file.\n");
            return 1;
            }

            printf("Account Pins:\n");
             // Read and print account pins from the file line by line.
            while (fscanf(file, "%d %d %f", &accountNumber, &pin, &balance) == 3) {
            printf("%2f\n", balance);
            }

            press_any_key();
            choice = 0;


        

    //print account numbers
    } else if(choice == 4) { 

        int accountNumber, pin;
        float balance;
            system("cls");
            FILE* file = fopen("data.dat", "r");
            if (file == NULL) {
            printf("Failed to open the file.\n");
            return 1;
            }

            printf("Account Numbers:\n");
             // Read and print account pins from the file line by line.
            while (fscanf(file, "%d %d %f", &accountNumber, &pin, &balance) == 3) {
            printf("%d\n", accountNumber);
            }
            press_any_key();
            choice = 0;



    //account pins
    } else if(choice == 5) { 

        int accountNumber, pin;
        float balance;
            system("cls");
            FILE* file = fopen("data.dat", "r");
            if (file == NULL) {
            printf("Failed to open the file.\n");
            return 1;
            }

            printf("Account Pins:\n");
             // Read and print account pins from the file line by line.
            while (fscanf(file, "%d %d %f", &accountNumber, &pin, &balance) == 3) {
            printf("%d\n", pin);
            }
            press_any_key();
            choice = 0;

    } else if(choice == 6) { 

    char ch;
            system("cls");
            FILE* file = fopen("accounts.dat", "r");
            if (file == NULL) {
            printf("Failed to open the file.\n");
            return 1;
            }

            // Read and print the file character by character.
            printf("Here are all the transactions on PUP Online Banking Systems\n");
            while (!feof(file)) {
            ch = fgetc(file);
            if (ch != EOF) {
            putchar(ch); // Alternatively, you can use printf("%c", ch);
            }
    }
            fclose(file);
            press_any_key();
            choice = 0;


    //delete
    } else if(choice == 7) {

            system("cls");

            char accnum_to_del[6];
            printf("Enter account number to delete: ");
            scanf("%5s", accnum_to_del);

            FILE* file = fopen("data.dat", "r");
            FILE* tempFile = fopen("temp.dat", "w");
            if (file == NULL || tempFile == NULL) {
            printf("Error opening file.\n");
            return;
            }

            struct BankAccount account;
        while (fscanf(file, "%s %s %f", account.account_number, account.pin, &(account.balance)) != EOF) {
        if (strcmp(account.account_number, accnum_to_del) != 0) {
            fprintf(tempFile, "%s %s %.2f\n", account.account_number, account.pin, account.balance);
        }
    }

            fclose(file);
            fclose(tempFile);

            remove("data.dat");
            rename("temp.dat", "data.dat");

            printf("Account deleted successfully.\n");

            To_Acc_Dat(2, accnum_to_del, account.pin, account.balance, account.balance);
            press_any_key();
            choice = 0;


    } else if(choice == 8) {

        char mselect;

        system("cls");

        printf("\nWould you like to Exit?");
        printf("\n[Y] if Yes");
        printf("\n[N] if No");
        printf("\nYour response: ");
        scanf(" %c", &mselect);


        if(mselect == 'Y' || mselect == 'y') {
        printf("Thankyou for using our ATM\n");
            choice = 9;

        } else if(mselect == 'N' || mselect == 'n') {
        
        choice = 0;

        } else {
        printf("Invalid choice. Please Enter Only [N/n] or [Y/y]\n");

        }

    } else {
        printf("Invalid choice.\n");
        return 1;
    }

}while (choice !=9);



    return 0;
}

//FUNCTIONS:

        /* -- What this function does is is fscanf every row until it finds the equivalent values
        inputed by the user through the use of "strcmp", it compares string char by char -- */
struct BankAccount* find_account(char account_number[], char pin[]) {
    FILE* file = fopen("data.dat", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return NULL; //This is just a user friendliness code designed if the file is non existent
    }

    struct BankAccount* account = (struct BankAccount*)malloc(sizeof(struct BankAccount)); 
    //mallocs the account pointer declared at the main function at the top
     
    while (fscanf(file, "%s %s %f", account->account_number, account->pin, &(account->balance)) != EOF) {
        if (strcmp(account->account_number, account_number) == 0 && strcmp(account->pin, pin) == 0) {
            //strcmp returns 0 if the accounts number and pin are the same as the user inputed
            fclose(file); 
            return account; //returns the row at whiched it stopped
        }
    }


    free(account);
    fclose(file);
    return NULL;
}

void save_accounts_to_file(struct BankAccount accounts[]) {
    FILE* file = fopen("data.dat", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    
        fprintf(file, "%s %s %.2f\n", accounts[0].account_number, accounts[0].pin, accounts[0].balance);
    

    fclose(file);
}

void To_Acc_Dat(int operation, const char* accNum, const char* pin, float inpBalance, float balance) {

    /* ---- Time Function START ----*/
    time_t now = time(NULL);

    char *string_now = ctime(&now);
    printf("\nTime Check: %s\n", string_now);


    time_t currentTime;
    time(&currentTime);

    // Convert the time to the local time zone
    struct tm *localTime = localtime(&currentTime);

    // Extract the date components from the localTime structure
    int day = localTime->tm_mday;      // Day of the month (1-31)
    int month = localTime->tm_mon + 1; // Month (0-11, so adding 1 to get 1-12)
    int year = localTime->tm_year + 1900; // Year (since 1900)

    /* ---- Time Function END ----*/


    FILE *logFile = fopen("accounts.dat", "a");

    if (logFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    switch (operation) {
        case 1: {
            // Account Creation //USED
            fprintf(logFile, "Mode - Account Creation: Account Number: %s | Account Pin: %s | Date: %02d/%02d/%d | Account Balance: %.2f\n", accNum, pin, day, month, year, inpBalance);
            break;
        }
        case 2: {
            // Account Deletion  //USED
            fprintf(logFile, "Mode - Account Deletion - Account Number: %s | Account Pin: %s |Date: %02d/%02d/%d | Remaining Balance: %.2f\n\n", accNum, pin, day, month, year, balance);
            break;
        }

        case 3: {
            // Account Withdrawal //USED
            fprintf(logFile, "Mode - Account Withdrawal: Account Number: %s | Account Pin: %s | Date: %02d/%02d/%d | Withdrawed Amount: %.2f, New Balance: %.2f\n", accNum, pin, day, month, year, inpBalance, balance);
            break;
        }

        case 4: {
            // Account Deposit //USED
            fprintf(logFile, "Mode - Account Deposit: Account Number: %s | Account Pin: %s | Date: %02d/%02d/%d | Deposited Amount: %.2f | New Balance: %.2f\n", accNum, pin, day, month, year, inpBalance, balance);
            break;
        }

    }

    fclose(logFile);
}

int hasAccountNumber(char *line, const char *accountNumber) {
    char accStr[50];
    sprintf(accStr, "Account Number: %s", accountNumber);
    return strstr(line, accStr) != NULL;
}

void press_any_key() {
    printf("\nPress any key to continue...");
    fflush(stdout);
    system("pause");
}