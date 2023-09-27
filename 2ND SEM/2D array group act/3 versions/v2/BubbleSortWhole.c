// Sorts the entire 2D array using bubble sort in ascending or descending order

#define ROWS 3
#define COLS 3

void BubbleSortWhole(double **numbers, int ifAscend) {
    int totalElements = ROWS * COLS;

    for (int i = 0; i < totalElements; i++) {
        for (int j = 0; j < totalElements - i - 1; j++) {
            // Calculate the row and column indices for the current and next elements
            double *current = *(numbers + (j / COLS)) + j % COLS;
            double *next = *(numbers + ((j + 1) / COLS)) + (j + 1) % COLS;

            // Check the sorting order and compare adjacent elements
            if ((*current > *next && ifAscend == 1) || (*current < *next && ifAscend == 2)) {
                // Swap the elements if they are in the wrong order
                double temp = *current;
                *current = *next;
                *next = temp;
            }
        }
    }

}
