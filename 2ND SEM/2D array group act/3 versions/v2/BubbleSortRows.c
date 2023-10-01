// Sorts each row of a 2D array using bubble sort in ascending or descending order

#define ROWS 3
#define COLS 3

void BubbleSortRows (double **numbers, int ifAscend){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {
                // Check the sorting order and compare adjacent elements
                if ((*(*(numbers + i) + k) > *(*(numbers + i) + k + 1) && ifAscend == 1) || (*(*(numbers + i) + k) < *(*(numbers + i) + k + 1) && ifAscend == 2)) {
                    // Swap the elements if they are in the wrong order
                    double temp = *(*(numbers + i) + k);
                    *(*(numbers + i) + k) = *(*(numbers + i) + k + 1);
                    *(*(numbers + i) + k + 1) = temp;
                }
            }
        }
    }
}
