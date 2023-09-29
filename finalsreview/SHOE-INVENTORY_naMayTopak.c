




































#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZES 12 //for sizes 3 to 14

int sn;
struct Inventory {
	int stockNum;
	int styleNum;
	int shoeSize;
	int numPairs[SIZES];
	float price;
} shoe;

bool isStockNumberExists(int stockNum) {
    FILE* fp = fopen("inventory.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return false;
    }

    int fileStockNum;
    while (fscanf(fp, "%d", &fileStockNum) != EOF) {
        // Skip the style number
        fseek(fp, sizeof(int), SEEK_CUR);

        if (fileStockNum == stockNum) {
            fclose(fp);
            return true;
        }

        // Move to the next line
        int c;
        while ((c = fgetc(fp)) != '\n' && c != EOF) {}
    }

    fclose(fp);
    return false;
}

void create(){

	FILE *fp = fopen("inventory.txt", "a");

    do{
    // User input for stock number
    printf("\nEnter stock number: ");
    scanf(" %d", &shoe.stockNum);
    fflush(stdin);

    // Assign style number based on stock number
    shoe.styleNum = shoe.stockNum - 1;

    if(shoe.stockNum < 1 || shoe.stockNum > 51 || isStockNumberExists(shoe.stockNum))
        printf("\nInvalid or duplicate stock number input. Please try again.\n");
    }while(shoe.stockNum < 1 || shoe.stockNum > 51 || isStockNumberExists(shoe.stockNum));

    // Size-wise Inventory
    printf("\nEnter the number of pairs for each size:\n");
    for (int i = 0; i < SIZES; i++) {
        printf("Size %02d: ", i + 3);
        scanf("%d", &shoe.numPairs[i]);
    }

    fflush(stdin);
    printf("\nEnter price: ");
    scanf("%f", &shoe.price);

    fp = fopen("inventory.txt", "a");

    fprintf(fp, "%d %d", shoe.stockNum, shoe.styleNum);
    for (int i = 0; i < SIZES; i++) {
        fprintf(fp, " %d\n", shoe.numPairs[i]);
    }
    fprintf(fp, " %.2f\n", shoe.price);
    fclose(fp);
}

void displayAll(){
	FILE* fp = fopen("inventory.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Check if the file is empty
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        printf("The inventory is empty. Please enter a stock now.\n");
        fclose(fp);
        return;
    }
    fseek(fp, 0, SEEK_SET);

    // Dynamically allocate memory for an array of struct Inventory
    struct Inventory* shoes = NULL;
    int numItems = 0;

    while (fscanf(fp, "%d %d", &shoe.stockNum, &shoe.styleNum) != EOF) {
        // Read size-wise inventory from the file
        for (int i = 0; i < SIZES; i++) {
            fscanf(fp, "%d", &shoe.numPairs[i]);
        }
        fscanf(fp, "%f\n", &shoe.price);

        // Resize the array to hold the new record
        numItems++;
        shoes = realloc(shoes, numItems * sizeof(struct Inventory));
        shoes[numItems - 1] = shoe;
    }

    fclose(fp);

    // Sort the array based on stock number using Bubble Sort
    for (int i = 0; i < numItems - 1; i++) {
        for (int j = 0; j < numItems - i - 1; j++) {
            if (shoes[j].stockNum > shoes[j + 1].stockNum) {
                // Swap the elements
                struct Inventory temp = shoes[j];
                shoes[j] = shoes[j + 1];
                shoes[j + 1] = temp;
            }
        }
    }

    // Display the sorted records to the user
    printf("%-13s | %-13s | %-7s | %-15s | %-10s\n", "Stock Number", "Style Number", "Sizes", "Number of Pairs", "Price");
    printf("-------------------------------------------------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        for (int j = 0; j < SIZES; j++) {
            if (j == 0) {
                printf("%-13d | %-13d | %-7d | %-15d | %-10.2f\n", shoes[i].stockNum, shoes[i].styleNum, j + 3, shoes[i].numPairs[j], shoes[i].price);
            } else {
                printf("%-13s | %-13s | %-7d | %-15d | %-10.2f\n", "", "", j + 3, shoes[i].numPairs[j], shoes[i].price);
            }
        }
        printf("-------------------------------------------------------------------------\n");
    }

    // Free the dynamically allocated memory
    free(shoes);
}

void read() {
    int option;
    printf("\nSelect an option:");
    printf("\n[1] Display the entire inventory");
    printf("\n[2] Display details of a specific product (by stock number)");
    printf("\n[3] Display only the existing stock numbers");
    printf("\nEnter your choice: ");
    scanf("%d", &option);
    fflush(stdin);
	system("cls");
	
    FILE* fp = fopen("inventory.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Check if the file is empty
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        printf("The inventory is empty. Please enter a stock now.\n");
        fclose(fp);
        return;
    }
    fseek(fp, 0, SEEK_SET);

    // Display the entire inventory
    if (option == 1) {
        displayAll();

    } else if (option == 2) {
        // Display details of a specific product (by stock number)
        int targetStockNum;
        printf("\nEnter the stock number of the product you want to display: ");
        scanf("%d", &targetStockNum);
        fflush(stdin);

        int found = 0; // To track if the product is found

        while (fscanf(fp, "%d %d", &shoe.stockNum, &shoe.styleNum) != EOF) {
            // Read size-wise inventory from the file
            for (int i = 0; i < SIZES; i++) {
                fscanf(fp, "%d", &shoe.numPairs[i]);
            }
            fscanf(fp, "%f\n", &shoe.price);

            if (shoe.stockNum == targetStockNum) {
                found = 1;

                printf("\nProduct Details:");
                printf("\nStock Number: %d", shoe.stockNum);
                printf("\nStyle Number: %d", shoe.styleNum);
                printf("\nSizes and Number of Pairs:\n");
                for (int i = 0; i < SIZES; i++) {
                    printf("Size %02d: %d\n", i + 3, shoe.numPairs[i]);
                }
                printf("Price: %.2f\n", shoe.price);
                break;
            }
        }

        if (!found) {
            printf("\nProduct with stock number %d not found.", targetStockNum);
        }

    } else if (option == 3) {
       int fileStockNum;
    int found = 0; // To track if any stock numbers are found

    printf("Existing Stock Numbers:\n");

    while (fscanf(fp, "%d", &fileStockNum) != EOF) {
        // Skip the style number
        fseek(fp, sizeof(int), SEEK_CUR);

        printf("%d\n", fileStockNum);
        found = 1;

        // Move to the next line
        int c;
        while ((c = fgetc(fp)) != '\n' && c != EOF) {}
    }

    fclose(fp);
	}
}

void update() {
	//displayAll();
    int option;

    FILE* fp = fopen("inventory.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Check if the file is empty
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        printf("The inventory is empty. Cannot update.\n");
        fclose(fp);
        return;
    }
    fseek(fp, 0, SEEK_SET);

    fclose(fp);

    int found = 0; // To track if the product is found

    printf("\nEnter the stock number of the product you want to update: ");
    scanf("%d", &sn);
    fflush(stdin);
    //getchar(); // Consume the newline character left in the input buffer

    FILE* fpTemp = fopen("temp.txt", "w");
    fp = fopen("inventory.txt", "r");

    while (fscanf(fp, "%d %d", &shoe.stockNum, &shoe.styleNum) != EOF) {
        // Read size-wise inventory from the file
        for (int i = 0; i < SIZES; i++) {
            fscanf(fp, "%d", &shoe.numPairs[i]);
        }
        fscanf(fp, "%f\n", &shoe.price);

        if (shoe.stockNum == sn) {
            found = 1;

            while (1) {
                printf("\nChoose what you want to update:");
                printf("\n[1] Number of Pairs");
                printf("\n[2] Price");
                printf("\nEnter your choice: ");
                scanf("%d", &option);

                if (option == 1) {
                    // Update the number of pairs
                    printf("\nEnter updated number of pairs:\n");
                    for (int i = 0; i < SIZES; i++) {
                        printf("Size %02d: ", i + 3);
                        scanf("%d", &shoe.numPairs[i]);
                    }
                    break;
                } else if (option == 2) {
                    // Update the price
                    printf("\nEnter updated price: ");
                    scanf("%f", &shoe.price);
                    getchar(); // Consume the newline character left in the input buffer
                    break;
                } else {
                    printf("\nInvalid option. Please choose 1 or 2.\n");
                    printf("No updates made.\n");
                }
            }
        }

        // Write the data to the temp file
        fprintf(fpTemp, "%d %d", shoe.stockNum, shoe.styleNum);
        for (int i = 0; i < SIZES; i++) {
            fprintf(fpTemp, " %d", shoe.numPairs[i]);
        }
        fprintf(fpTemp, " %.2f\n", shoe.price);
    }

    fclose(fp);
    fclose(fpTemp);

    if (found) {
        remove("inventory.txt");
        if (rename("temp.txt", "inventory.txt") == 0) {
            printf("\nProduct with stock number %d updated successfully.\n", sn);
            displayAll();
        } else {
            printf("\nError updating the inventory. Please check file permissions.\n");
        }
    } else {
        remove("temp.txt"); // If the product is not found, delete the temporary file
        printf("\nProduct with stock number %d not found.", sn);
    }
}

void deleteProd() {
	displayAll();
    FILE* fp = fopen("inventory.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Check if the file is empty
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        printf("The inventory is empty. Cannot remove a product.\n");
        fclose(fp);
        return;
    }
    fseek(fp, 0, SEEK_SET);

    fclose(fp);

    printf("\nWhich product do you want to remove?");
    printf("\nEnter stock number: ");
    scanf("%d", &sn);
    fflush(stdin);

    fp = fopen("inventory.txt", "r+");
    FILE *fpTemp = fopen("temp.txt", "w");

    int productFound = 0;

    while (fscanf(fp, "%d %d", &shoe.stockNum, &shoe.styleNum) != EOF) {
        // Read size-wise inventory from the file
        for (int i = 0; i < SIZES; i++) {
            fscanf(fp, "%d", &shoe.numPairs[i]);
        }
        fscanf(fp, "%f\n", &shoe.price);

        if (shoe.stockNum != sn) {
            fprintf(fpTemp, "%d %d", shoe.stockNum, shoe.styleNum);
            for (int i = 0; i < SIZES; i++) {
                fprintf(fpTemp, " %d", shoe.numPairs[i]);
            }
            fprintf(fpTemp, " %.2f\n", shoe.price);
        }else{
            productFound = 1;
        }
    }

    fclose(fp);
    fclose(fpTemp);

    if(productFound){
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
        printf("\nProduct with stock number %d removed successfully.\n", sn);
        displayAll();
    }else{
        remove("temp.txt"); // If the product is not found, delete the temporary file
        printf("\nProduct with stock number %d not found.\n", sn);
    }
}

int main(){

    int choice;
    char select;

    do{
    printf("\n\nCIA Shoes Inventory");
    printf("\n-------------------");
    printf("\n\n[1] Enter new product");
    printf("\n[2] Display inventory");
    printf("\n[3] Update a Product");
    printf("\n[4] Remove a Product");
    printf("\n[5] Exit");

    printf("\n\nSelect an option: ");
    scanf("%d", &choice);
    fflush(stdin);
	system("cls");

    switch(choice){
        case 1:
            create();
            break;
        case 2:
            read();
            break;
        case 3:
            update();
            break;
        case 4:
            deleteProd();
            break;
        case 5:
   		 do {
        printf("\nWould you like to Exit?");
        printf("\n[Y] if Yes");
        printf("\n[N] if No");
        printf("\nYour response: ");
        scanf(" %c", &select);

        if (select != 'Y' && select != 'y' && select != 'N' && select != 'n') {
            printf("\nInvalid input!");
            printf("\nPlease only enter Y or N.");
        } else if (select == 'N' || select == 'n') {
            choice = 0;
        } else {
            printf("\nThank you for using the program!\n");
            return 0;
        }
        system("cls");
    } while (select != 'Y' && select != 'y' && select != 'N' && select != 'n');
    break;
        default:
            printf("Invalid Input! Please try again");
            break;
    }
    }while(choice!=5);
}


