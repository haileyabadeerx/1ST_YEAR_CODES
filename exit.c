int exitsure() {
    printf("\nAre you sure you want to exit? (y/n): ");
    char sure;
    scanf("%c", &sure);

    if (sure == 'y' || sure == 'Y') {
        printf("\nThank you for using our calculator program!\n");
        return 1;  // Return 1 if sure to exit
    } else {
        printf("\nReturning to the main program...\n");
        return 0;  // Return 0 if want to return to the menu
    }
}
